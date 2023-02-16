#include <stdio.h>
int fact (int);
int main()
{
	int a,f;
	printf("Enter any number ");
	scanf("%d",&a);
	f=fact(a);
	printf("Factorial= %d",f);
	
}

int fact (int x)
{
	int r;
	if (x==1  || x==0)
	{
		return 1;
	}
	else
	{
		r=x*fact(x-1);
		return r;
	}
}
