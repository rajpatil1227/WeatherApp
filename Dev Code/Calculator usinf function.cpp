#include <stdio.h>
div(int a,int b)
{
	int c;
	c=a/b;
	printf("%d",c);
}
mult(int a,int b)
{
	int c;
	c=a*b;
	printf("%d",c);	
}
sub(int a,int b)
{
	int c;
	c=a-b;
	printf("%d",c);	
}
add(int a,int b)
{
	int c;
	c=a+b;
	printf("%d",c);	
}	
int main()
{
	int a,b,c;
	char op;
	printf("Enter operator:\n");
	scanf("%s",&op);
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	if(op=='+')
	{
		printf("Addition: ");
		add(a,b);
		
	}
	else if(op=='-')
	{
		printf("Substraction: ");
		sub(a,b);
		
	}
	else if(op=='*')
	{
		printf("Multiplication: ");
		mult(a,b);
		
	}
	else if(op=='/')
	{
		printf("Division: ");
		div(a,b);
		
	}
	else
	{
		printf("Error!");
	}
}
		





