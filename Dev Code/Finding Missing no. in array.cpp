#include <stdio.h>
int main()
{
	int arr[10],i,a,b,p,q,r,n,d=1,sum=0,temp;
	
	scanf("%d",&n);
	for(i=0;i<(n-1);i++) 
	{
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<(n-1);i++) 
	{
		for(int j=i+1;j<=(n-1);j++) 
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		sum=sum+arr[i];
	}
	d=1;
	a=arr[0];
	p=(2*a+(n-1)*d);
	q=n/2;
	r=p*q;
	b=r-sum;
	printf("%d",b);
}


