#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int data;
    struct node *next;
};
struct node *newnode, *temp, *head;
int i,n;

void create()
{
//	struct node *newnode, *temp, *head;
//	int i,n;
	printf("No. of elements you want\n");
	scanf("%d",&n);
	head =0;
	for(i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}	
}

void insert_at_begining()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data at begining:");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}

void insert_at_end()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter data at end:");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next !=0)
	{
		temp=temp->next;
	}	
	temp->next=newnode;
	newnode->next=0;
}

void insert_at_position()
{
	int a,i;
	printf("Enter the position to insert");
	scanf("%d",&a);
	if(a>n)
	{
		printf("Invalid position");
	}
	else
	{
		temp=head;
		while(i<a)
		{
			temp=temp->next;
			i++;
		}
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d",&newnode->data);
		newnode->next=temp->next;
		temp->next=newnode;
	}
}

void delete_from_begining()
{
	temp=head;
	head=head->next;
	free(temp);
}

void delete_from_end()
{
	struct node *prevnode;
	while(temp->next!=0)
	{
		prevnode=temp;
		temp=temp->next;	
	}	
	if(temp==head)
	{
		head=0;
	}
	else
	{
		prevnode->next=0;
	}
	free(temp);
}

void delete_from_specified_position()
{
	struct node *nextnode;
	int pos,i=1;
	temp=head;
	printf("Enter the position:");
	scanf("%d",&pos);
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
}

void display()
{
//	struct node *newnode, *temp, *head;
//	int i,n;
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
	insert_at_begining();
	insert_at_end();
	insert_at_position();
	printf("\nThe given list is:\n");
	display();
	delete_from_begining();
//	delete_from_end();
	delete_from_specified_position();
	printf("\nThe given list after deletion is:\n");
	display();
}
