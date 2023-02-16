#include <stdio.h>
int main()
{
	int i, a[10],b[10],c[10];
	
	for(i=0;i<=9;i++)
	{
		printf("Array a ");
		scanf("%d",&a[i]);
	}printf("\n");
	
	for(i=0;i<=9;i++)
	{
		printf("Array b ");
		scanf("%d",&b[i]);
	}printf("\n");
	
	for(i=0;i<=9;i++)
	{
		printf("Sum is %d\n",a[i]+b[i]);
	}printf("\n");
}
