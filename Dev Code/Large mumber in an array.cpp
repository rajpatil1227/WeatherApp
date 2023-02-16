#include <stdio.h>
int main()
{
	int i, a[10],max;
	max=a[0];
	for(i=0;i<=9;i++)
	{
		printf("Enter number ");
		scanf("%d",&a[i]);
		
		if(a[i]>max)
		{
			max=a[i];
		}
		else
		{
			
		}
	}printf("\nLargest number is %d",max);
}
