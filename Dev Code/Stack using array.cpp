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
		stack[top]=item;
		top--;
		printf("%d",item);
	}
}

int main()
{
	push();
	pop();	
}
