#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c,d,f;
	
	printf("Enter any number ");
	scanf("%d",&a);
	b=sqrt(a);
	printf("\nSquare root of given number is %d",b);
	
	printf("\n\nEnter the any number and its power  ");
	scanf("%d %d",&c,&d);
	f=pow(c,d);
	
	printf("%d raised to %d is\n%d",c,d,f);
	
}
