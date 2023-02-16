#include<stdio.h>
int main()
{
	int a,b;
	a=0;
	b=1;
	do{
		
		a=a+b;
		b=b+1;
	}while(b<=9);
	printf("Sum of 1 to 10\n%d \n",a+b);
}
