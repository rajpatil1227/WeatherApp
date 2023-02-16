#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	puts("Give the string:");
	gets(a);
	
	b==strrev(a);
	//printf("Reversed string is:\n%s",a);
	strcpy(b,a);
	printf("\nStored reverse string is\n%s\n\n",b);
	
	puts("Give the string:");
	gets(a);
	printf("\n\n");
	
	int result= strcmp(a,b);
	if(result==0)
	{
		printf("Given string is palendrome");	
	}
	else
	{
		printf("Given string is not palendrome");
	}
}

