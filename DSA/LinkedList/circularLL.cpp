#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

void printLL(struct Node* Head)
{
    struct Node *temp=NULL;
    temp=Head;
    
    if(Head==NULL)
    {
        cout<<endl<<"Linked List is empty";
        return ;
    }
    
    cout<<endl<<"Values are:\n";

    do
    {
        cout<<temp->data<<" ";
        temp=temp->Next;
    }while(temp!=Head);
}

void insert_at_head(struct Node* &Head,int val)
{
    struct Node* start=(struct Node*)malloc(sizeof(struct Node));
    start->data=val;

    // if(Head=NULL)
    // {
    //     start->Next=start;
    //     Head=start;
    //     return ;
    // }

    struct Node* temp=Head;

    do
    {
        temp=temp->Next;
    }while (temp->Next!=Head);

    temp->Next=start;
    start->Next=Head;
    Head=start;
}

void insert_at_tail(struct Node* &Head, int val)
{
    struct Node* last=(struct Node*)malloc(sizeof(struct Node));
    last->data=val;
    
    if(Head==NULL)
    {
        insert_at_head(Head,val);
        return ;
    }
    
    struct Node* temp=Head;
    
    do
    {
        temp=temp->Next;
    }while (temp->Next!=Head);
    
    temp->Next=last;
    last->Next=Head;
}

void delete_head(struct Node* &Head)
{
    struct Node *temp=Head;
    while(temp->Next!=Head)
    {
        temp=temp->Next;
    }
    
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=Head;
    temp->Next=Head->Next;
    Head=Head->Next;
    
    free(ptr);
}

void delete_any(struct Node* &Head,int pos)
{
    struct Node *temp=Head;
    int count=1;
    
    while(count!=pos-1)
    {
        temp=temp->Next;
        count++;
    }
    
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr=temp->Next;
    temp->Next=temp->Next->Next;
    free(ptr);
}

int main()
{
    struct Node* Head =(struct Node*)malloc(sizeof(struct Node));
    struct Node* first=(struct Node*)malloc(sizeof(struct Node));
    
    Head->data=18;
    Head->Next=first;

    first->data=19;
    first->Next=Head;

    insert_at_tail(Head,20);
    printLL(Head);
    
    insert_at_head(Head,17);
    printLL(Head);
    
    delete_any(Head,2);
    printLL(Head);
    
    delete_head(Head);
    printLL(Head);
}