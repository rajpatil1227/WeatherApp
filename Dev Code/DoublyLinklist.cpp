#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *newnode, *temp, *head;
int num,i;

void create()
{
	printf("Number of elements:");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
	newnode=(struct node*)malloc(sizeof(struct node));
	head=0;
	printf("Enter data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	
	if(head==0)
	{
		head=temp=newnode;
	}
	else
	{
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	}
}	

void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("Data:%d\n",temp->data);
		temp=temp->next;
	}
}

int main()
{
	create();
	display();
}
