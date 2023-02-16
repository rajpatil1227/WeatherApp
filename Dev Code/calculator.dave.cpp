#include <stdio.h>
int main()
{
	int a,b,c;
	char op;
	printf("Enter an operator(+,-,*,/):");
	scanf("%c",&op);
	printf("Enter Two numbers\n");
	scanf("\n%d\n%d",&a,&b);
	
	
	switch(op)
	{
	case'+': c=a+b;
	       printf("Addition %d",c);
	        break;
	case'-': c=a-b;
	        printf("Substraction %d",c); 
	        break;       
	case'*': c=a*b;
	        printf("Multiplication %d",c);
	        break;
	case'/': c=a/b;
	        printf("Division %d",c);
                    break;
            default:
	        printf("Error!");        
            }
}
