#include<stdio.h>
int main()
{
	int a[4]={2,4,6,8};
	int *q;
	q=a;
	
	printf("%d",*(q+1));
}
