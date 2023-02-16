#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=1;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("\t\t\t");
			printf("%d",b);
		}
		
	}printf("\n");
	printf("\t");
	
	for(a=2;a<=2;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("\t");
			
			printf("%d",b);
			
		}
		
	}printf("\t1");
	printf("\n");
	
	for(a=3;a<=3;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("\t");
			printf("%d",b);
		}
		
	}printf("\t2\t1");
	printf("\n");
	
	for(a=4;a<=4;a++)
	{
		for(b=1;b<=a;b++)
		{
			
			printf("%d\t",b);
		}
		
	}printf("3\t2\t1");
}

		     

