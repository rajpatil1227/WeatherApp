#include <stdio.h>
#include <string.h>
int main()
{
	char a[10],b[10];
	int c,d;
	puts("String 1: ");
	gets(a);
            
	puts("String 2: ");
	gets(b);
	
            c= strlen(a);
	d= strlen(b);
	
	if(c==d)
	{
		printf("Strings are equal");
	}
	else
	{
	            printf("Strings are not equal");	
	}
}
