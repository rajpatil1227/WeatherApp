#include<stdio.h>
int main()
{
	int l[3][3],m[3][3],i,j,a,b;

	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&l[i][j]);
		}
	}
	
	printf("\nMatrix A\n");
	
	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			printf("\t%d",l[i][j]);
		}printf("\n");
	}
	
	for(a=0;a<=2;a++)
	
	{
		for(b=0;b<=2;b++)
		{
			scanf("%d",&m[a][b]);
		}
	}
	
	printf("\nMatrix B\n");
	
	for(a=0;a<=2;a++)
	
	{
		for(b=0;b<=2;b++)
		{
			printf("\t%d",m[a][b]);
		}printf("\n");
	}
	
	printf("\nMultiplication\n");
	for(i=0;i<=0;i++)
	for(b=0;b<=0;b++)
	
	{
	            for(j=0;j<=2;j++)
	            for(a=0;a<=2;a++)
		{
		
			
             	}printf("\t%d",l[0][j]*m[a][0]);
		 printf("\n");
	}

	
}
