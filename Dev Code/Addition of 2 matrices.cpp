#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;

	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nMatrix A\n");
	
	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			printf("\t%d",a[i][j]);
		}printf("\n");
	}
	
	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nMatrix B\n");
	
	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			printf("\t%d",b[i][j]);
		}printf("\n");
	}
	
	printf("\nAddition\n");
	
	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			printf("\t%d",a[i][j]+b[i][j]);
		}printf("\n");
	}
}
