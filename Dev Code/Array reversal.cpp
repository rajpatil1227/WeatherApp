#include <stdio.h>
int main ()
{
	int n,a[100],i,b[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	
	//for(i=0;i<n;i++) 
	//{
	//	a[i]=b[i];
	//}
	printf("\n");
	for(i=(n-1);i>=0;i--) 
	{
		printf("%d ",a[i]);
	}

}
