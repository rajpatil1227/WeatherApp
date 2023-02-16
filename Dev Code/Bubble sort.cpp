#include <iostream>
using namespace std;

int main()
{
	int a[200],n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		bool swapped = false;
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
				swapped=true;
			}
		}
		if(swapped==false)
			break;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
