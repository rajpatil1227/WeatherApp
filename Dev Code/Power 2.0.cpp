#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	puts("Enter any number and its power\n");
	scanf("%lf %lf",&a,&b);
	c=pow(a,b);
	printf("%lf",c);
}
