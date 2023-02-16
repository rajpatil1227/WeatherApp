#include <stdio.h>
int add(int x,int y)

{
	int u;
	u=x+y;
	
	return u;
}
int sub(int x,int y)
{
	int v;
	v=x-y;
	return v;
}
int main()
{
	int a,b,c,d,e;
	a=5;
	b=10;
	d=5;
	c=add(a,b);
	e=sub(c,d);
	printf("Addition %d",c);
	printf("\nSubstraction %d",e);
}
