#include<stdio.h>
int main()
{
	int a[3][3][3],i,j,k;

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
			      scanf("%d",&a[i][j][k]);	
			}
			
		}
	}
	
	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
		    for(k=0;k<=2;k++)
			{
			      printf("\t%d",a[i][j][k]);	
			}printf("\n");	
		}printf("\n");
	}
           
}
