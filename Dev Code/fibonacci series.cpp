#include <stdio.h>
int main()
{
	int a,b,i,c,n;
	
	printf("Enter a number ");
	scanf("%d",&n);
	printf("\n%d,%d",a,b);
	for(i=2;i<n;i++)
	{
		c=a+b;
		printf(",%d",c);
		a=b;
		b=c;
	}
}




