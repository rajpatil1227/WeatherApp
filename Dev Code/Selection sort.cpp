#include <iostream>
using namespace std;
int main()
{
	int minIndex,a[100],n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[minIndex])
				minIndex=j;
		}
		swap(a[minIndex],a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
