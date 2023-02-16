#include <stdio.h>
int main()
{

	char a,i;
	int b;
	for(i=1;i<10;i++)
	{
	
		printf("Enter your name:\n");
		scanf("%ls",&a);
		printf("Do you want to continue then press 1 otherwise press 2:\n");
		scanf("%d",&b);
		if(b>1)
		{
		    break ;	
		}
		
	}
}
