#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number\n");
	scanf("%d",&a);
	for(b=2;b<a;b++)
	{
		if(a%b==0)
		{
		        printf("number is not prime"); 
	        	break;
		}
	}
 
	    if(b==a)
 	    {
 	            printf("number is prime");	
	    }
}
