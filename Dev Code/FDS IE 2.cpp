#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE;



NODE *insert_at_end(NODE *head,int n)
{
    NODE * new_node=(NODE *)malloc(sizeof(NODE));
    new_node->data=n;
    new_node->next=NULL;
    
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        NODE *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
    return head;
}

NODE *create_list(NODE *head)
{
    int i,n;

    
    for(i=0;i<10;i++)
    {
    
        scanf("%d",&n);
        head=insert_at_end(head,n);
    }
    return head;
}


void show(NODE *head)
{
    NODE *temp=head;
    if(head==NULL)
    {
        printf("List is empty");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

int main()
{
int value;
    NODE *head=NULL;
    
        head=create_list(head);
        
        struct node* temp=head;
                            
                          scanf("%d",&value);
                          
                          if(value>10){
                              value=value % 10;
                          }
                          
                          for(int i=2;i<10+1-value;i++)
                          {
                              if(temp->next != NULL)
                              {
                                  temp=temp->next;
                              }
                          }
                          temp->next=temp->next->next;
     show(head);       
}
