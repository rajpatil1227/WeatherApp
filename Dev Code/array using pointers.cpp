#include <stdio.h>

int main()
{
	int a[10],i,*b;
	b=&a[10];
	for(i=0;i<=9;i++)
	{
		printf("");
		scanf("%d",&a[i]);
	
	}	
	for(i=0;i<=9;i++)
	{
		printf("%d ",*&b);
	}
}

 
