#include <stdio.h>
#include <string.h>
int main()
{
	int b;
	char a[10];
	puts("Enter the string");
	gets(a);
	b=strlen(a);
	printf("Length of given string is\n%d",b);
}
