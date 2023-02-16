#include <limits.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <string.h> 
 
struct Stack  
{      
  int top;      
  int maxSize;     
  char* array;  
};   
char stacktop(struct Stack* stack) 
{   
  return stack->array[stack->top]; 
}  
struct Stack* create(int max)  
{      struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
      stack->maxSize = max;      
      stack->top = -1;      
      stack->array = (char*)malloc(stack->maxSize * sizeof(char));     
      return stack;  
}   
int isFull(struct Stack* stack)  
{      
	if(stack->top == stack->maxSize - 1)
	{         
	printf("Will not be able to push maxSize reached\n"); 
    	} 
	return stack->top == stack->maxSize - 1;  
}   
int isEmpty(struct Stack* stack)  
{      
	return stack->top == -1;  
}  
void push(struct Stack* stack, int item)  
{      
	if (isFull(stack))          
	return;      
	stack->array[++stack->top] = item;  
}  
int pop(struct Stack* stack)  
{      
	if (isEmpty(stack))          
	return INT_MIN;  
    	return stack->array[stack->top--];  
}   
int peek(struct Stack* stack)  
{      
	if (isEmpty(stack))          
	return INT_MIN;  
   	return stack->array[stack->top];  
}   
int checkIfOperand(char ch)  
{      
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');  
}   
void reverse(char *exp) 
{  
    int size = strlen(exp);     
    int j = size, i=0;     
    char temp[size]; 
     temp[j--]='\0';     
     while(exp[i]!='\0') 
     {         
     temp[j] = exp[i];         
     j--;         
     i++;     
     }     
     strcpy(exp,temp); 
}  
void brackets(char* exp) 
{     
	int i = 0;    
	while(exp[i]!='\0') 
	    {         
	    if(exp[i]=='(')             
	    exp[i]=')';         
	    else if(exp[i]==')')             
	    exp[i]='(';         
	    i++; 
	    } 
}  
int precedence(char ch)  
{  
    switch (ch)      
    {      
    	case '+':      
   	case '-':          
    		return 1;  
	case '*':      
	case '/':          
		return 2;  
     	case '^':          
	     	return 3;  
    }      
    return -1;  
}   
struct Stack* createStack(int maxSize) 
{ 
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
     if (!stack) return NULL; 
     stack->top = -1; stack->maxSize = maxSize; 
    stack->array = (char*) malloc(stack->maxSize * sizeof(char)); 
     if (!stack->array) return NULL; 
     return stack; 
}  
int evaluatePostfix(char* exp) 
{     struct Stack* stack = createStack(strlen(exp));     int i;  
    if (!stack) return -1; 
     for (i = 0; exp[i]; ++i) 
    {          if (isdigit(exp[i]))             push(stack, exp[i] - '0'); 
         else         {             int val1 = pop(stack);             int val2 = pop(stack);             switch (exp[i]) 
            {             case '+': push(stack, val2 + val1); break;             case '-': push(stack, val2 - val1); break;             case '*': push(stack, val2 * val1); break;             case '/': push(stack, val2/val1); break; 
            } 
        }     }     return pop(stack); 
}  
int infixToPostfix(char* exp) 
{     int i, k; 
 
    struct Stack* stack = createStack(strlen(exp));     if(!stack)          return -1 ; 
 
for (i = 0, k = -1; exp[i]; ++i) 
    { 
                  if (checkIfOperand(exp[i]))             exp[++k] = exp[i]; 
                  else if (exp[i] == '(')             push(stack, exp[i]); 
         else if (exp[i] == ')') 
        {             while (!isEmpty(stack) && peek(stack) != '(')                 exp[++k] = pop(stack);             if (!isEmpty(stack) && peek(stack) != '(')                 return -1;                          else                 pop(stack); 
        }         else          {             while (!isEmpty(stack) &&                   precedence(exp[i]) <= precedence(peek(stack)))                 exp[++k] = pop(stack);             push(stack, exp[i]); 
        } 
 
    }      while (!isEmpty(stack))         exp[++k] = pop(stack ); 
     exp[++k] = '\0';     printf( "%s", exp );     return 0; 
}  
int ToPostfix(char* exp) 
{     int i, k; 
 
    struct Stack* stack = createStack(strlen(exp));     if(!stack)          return -1 ; 
     for (i = 0, k = -1; exp[i]; ++i) { 
                  if (checkIfOperand(exp[i]))             exp[++k] = exp[i]; 
                  else if (exp[i] == '(')             push(stack, exp[i]); 
         else if (exp[i] == ')') 
        {             while (!isEmpty(stack) && peek(stack) != '(')                 exp[++k] = pop(stack);             if (!isEmpty(stack) && peek(stack) != '(')                 return -1;                          else                 pop(stack); 
        }         else          {             while (!isEmpty(stack) &&                   precedence(exp[i]) <= precedence(peek(stack)))                 exp[++k] = pop(stack);             push(stack, exp[i]); 
        } 
 
    }      while (!isEmpty(stack))         exp[++k] = pop(stack ); 
 
    exp[++k] = '\0';     return 0; 
}  
void InfixtoPrefix(char *exp) 
{     
	int size = strlen(exp);     
	reverse(exp);     brackets(exp);     
	ToPostfix(exp);     
	reverse(exp);     
	printf("%s\n",exp); 
}  
int evaluateprefix(char *exp) 
{   
	reverse(exp);   
	return evaluatePostfix(exp); 
}  
int main() 
{   
	int a,b=1;     
	while(b==1)
	{     
		printf("Insert 1 -> if you want to convert the expression into postfix\nInsert 2 -> if you want to convert the expression into prefix\nInsert 3 -> for  Postfix expression evaluation\nInsert 4 -> for Prefix expression evaluation\n");     
		scanf("%d",&a);     
		char expression[20];     
		printf("\nInsert the expression -> ");     
		scanf("%s",expression);      
		if(a==1)
		{       
		infixToPostfix(expression); 
    		}  
    		if(a==2)
		{ 
		     InfixtoPrefix(expression);  
		}     
		if(a==3)
		{       
			printf ("postfix evaluation: %d", evaluatePostfix(expression)); 
		}      
		if(a==4)
		{       
			printf ("postfix evaluation: %d", evaluateprefix(expression)); 
		}     
			printf("\nDo you want to do another conversion/evaluation then enter 1 else enter 0 -> ");     scanf("%d",&b); 
		}     
		return 0;  
} 
 

