#include <stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("Given number:");
	scanf("%d",&n);
	temp=n;
	while(n>0) 
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=temp;
	if(n==sum)
		printf("Given number is palindrome");
	else
		printf("Given number is not palindrome");
	return 0;
}
