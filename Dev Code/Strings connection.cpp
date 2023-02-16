#include <stdio.h>
#include <string.h>
int main()
{
	char a[10],b[10],c[20];
	
	puts("String 1= ");
	gets(a);
            
	puts("String 2= ");
	gets(b);
	strcat(a,b);
	printf("Combine string is %s",b);
	
            
}
