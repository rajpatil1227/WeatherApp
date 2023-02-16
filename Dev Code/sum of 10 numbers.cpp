#include <stdio.h>
int main()
{
	int a,b,c;
	c=0;
	for(b=1;b<=10;b++)
	{
		printf("Enter a number");
		scanf("%d",&a);
		c+=a;
	}printf("Sum is %d",c);
}
