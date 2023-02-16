#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter three digit number\n");
	scanf("%d",&a);
	b=a/100;
	c=a%100;
	d=c/10;
	e=c%10;
	f=(b*b*b)+(d*d*d)+(e*e*e);
	if(f==a)
	{
		printf("It is a Armstrong number");
	}
	else
	{
		printf("It is not a Armstrong number");
	}
}
