#include<stdio.h>
int main()
{
	int a[3][3],i,j;

	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
		    	if(i>j)
			{
				a[i][j]=0;
			}
			
		            else if(j>i)
			{
				a[i][j]=0;
			}
			else
			{
			            scanf("%d",&a[i][j]);	
			}	
			
			
			
		}
		            
	}
                        
			
	printf("\nUnit Matrix=\n\n");
	for(i=0;i<=2;i++)
	
	{
		for(j=0;j<=2;j++)
		{
			printf("\t%d",a[i][j]);
		}printf("\n");
	}
           
}
