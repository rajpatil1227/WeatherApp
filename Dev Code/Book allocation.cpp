#include <bits/stdc++.h>
using namespace std;

bool isPossible(int a[],int n,int m,int mid)
{
	int studentCount =1;
	int pageSum=0;
	for(int i=0;i<m;i++)
	{
		if(pageSum+a[i]<=mid)
		{
			pageSum+=a[i];
		}
		else
		{
			studentCount++;
			if(studentCount>n || a[i]>mid)
			{
				return false;
			}
			pageSum=a[i];
		}
	}
	return true;
}

int main()
{
	int s,e,mid,n,a[1000],m,sum=0;
	int ans=-1;
	cout<<"Enter the no of students: ";
	cin>>n;
	cout<<"Enter the array no: ";
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	s=0;
	e=sum;
	mid=s+(e-s)/2;
	while(s<=e)
	{
		if (isPossible(a,n,m,mid))
		{
			ans=mid;
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}
	cout<<"Answer is: "<<ans;
}
