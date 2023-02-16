#include <stdio.h>
int main()
{
	int a,b,i,c,n;
	i=2;
	a=0;
	b=1;
	printf("Enter a number ");
	scanf("%d",&n);
	printf("\n%d,%d",a,b);
	do{
		c=a+b;
		printf(",%d",c);
		i=i+1;
		a=b;
		b=c;
	}while(i<n);
}
