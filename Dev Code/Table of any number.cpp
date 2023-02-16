#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter any number");
	scanf("%d",&a);
	b=a;
	c=1;
	do
	{
		printf("%d\n",a);
		c=c+1;
		a=a+b;
		
	}while(c<=10);
}
