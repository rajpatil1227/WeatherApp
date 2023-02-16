#include <stdio.h>
void add(int x,int y)
{
	int z;
	z=x+y;
	printf("Addition %d",z);
}
int main()
{
	int a,b;
	a=5;
	b=10;
	add(a,b);
}
