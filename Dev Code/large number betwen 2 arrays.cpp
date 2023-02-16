#include <stdio.h>
int main()
{
	int i, a[10],b[10],max1,max2;
	max1=a[0];
	for(i=0;i<=9;i++)
	{
		printf("Enter number ");
		scanf("%d",&a[i]);
		
		if(a[i]>max1)
		{
			max1=a[i];
		}
		else
		{
			
		}
	}printf("\nLargest number is %d",max1);
	printf("\n\n");
	
	max2=b[0];
	for(i=0;i<=9;i++)
	{
		printf("Enter number ");
		scanf("%d",&b[i]);
		
		if(b[i]>max2)
		{
			max2=b[i];
		}
		else
		{
			
		}
	}printf("\nLargest number is %d",max2);
	printf("\n\n");
	
	if(max1>max2)
	{
		printf("\n big number is %d",max1);
	}
	else if(max2>max1)
	{
	            printf("\n big number is %d",max2);	
	}
	else
	{
		printf("Both are equal");
	}
}
