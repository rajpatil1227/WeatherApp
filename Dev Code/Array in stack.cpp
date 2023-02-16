#include <stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
	int x;
	printf("Enter data:");
	scanf("%d",&x);
	if(top==N-1)
	printf("Overflow");
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	int item;
	if(top==-1)
	printf("Underflow");
	else
	{
		item=stack[top];
		top--;
		printf("%d\n",item);
	}
}

void peek()
{
	if(top==-1)
	printf("Underflow");
	else
	{
		printf("%d \n",stack[top]);	
	}	
}

void display()
{
	int i;
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);	
	}
}

int main()
{
	push();
	push();
	printf("Top element:");
	peek();
	push();
	push();
	printf("Popped element:");
	pop();
	printf("Top element:");
	peek();
	printf("Popped element:");
	pop();
	display();	
}
