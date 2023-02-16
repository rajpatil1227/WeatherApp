#include <stdio.h>
int main()
{
	int a,b,c,i,d;
	char o;
	
	for(i=1;i<=10;i++)
	{
	printf("Enter an operator(+,-,*,/):");
	scanf("%s",&o);
	printf("\nEnter Two numbers\n");
	scanf("\n%d\n%d",&a,&b);	
	switch(o)
	{
	case'+': c=a+b;
	       printf("Addition %d",c);
	        goto next;
	case'-': c=a-b;
	        printf("Substraction %d",c); 
	        goto next;       
	case'*': c=a*b;
	        printf("Multiplication %d",c);
	        goto next;
	case'/': c=a/b;
	        printf("Division %d",c);
                    goto next;
            default:
	        printf("Error!");
	        next:
	        printf("\n\nDo you want to continue then press 1 otherwise press 2:\n");
	        scanf("%d",&d);
	}
	        if(d>1)
	        {
	        	break;
	        }       
	
            }
}
	
		
		





