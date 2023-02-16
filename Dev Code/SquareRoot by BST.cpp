#include <iostream>
using namespace std;

int squareroot(int n)
{
	int start =0;
	int end=  n;
	long long int mid = start+(end-start)/2;
	while(start<end)
	{
		long long int square=mid*mid;
		if(square==n)
			return mid;
		if(square>n)
			end=mid-1; 
		else
			start=mid+1;
		mid = start+(end-start)/2;
	}
}
int main()
{
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	cout<<"Square root is: "<<squareroot(n);
}
