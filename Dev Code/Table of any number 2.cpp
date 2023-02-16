#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter any number");
	scanf("%d",&a);
	b=1;
	do
	{
		printf("%d\n",a*b);
		
		b=b+1;
	}while(b<=10);
}
