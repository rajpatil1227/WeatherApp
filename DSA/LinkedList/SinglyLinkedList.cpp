#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

int count_of_nodes(struct Node* Head)
{
    int count=0;

    if(Head==NULL)
        return 0;
    
    struct Node *temp=NULL;
    temp=Head;

    while(temp != NULL)
    {
        count++;
        temp=temp->Next;
    }

    return count;
}

void printLL(struct Node *Head)
{
    if(Head==NULL)
        cout<<endl<<"Linked List is empty";
    
    struct Node *temp=NULL;
    temp=Head;

    cout<<endl<<"Values are:\n";

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->Next;
    }
}

void add_at_begin(struct Node* &Head,int data)
{
    struct Node *Begin=(struct Node*)malloc(sizeof(struct Node));

    Begin->data=data;
    Begin->Next=NULL; 

    Begin->Next=Head;
    Head=Begin;
}

void add_at_any_position(struct Node* Head,int data,int pos)
{
    struct Node *temp, *Insert;
    temp=Head;

    Insert=(struct Node*)malloc(sizeof(struct Node));
    Insert->data=data;
    Insert->Next=NULL;

    pos--;
    while (pos!=0)
    {
        temp=temp->Next;
        pos--;
    }
    
    Insert->Next=temp->Next;
    temp->Next=Insert;
}

void add_at_end(struct Node *Head,int data)
{
    struct Node *End,*temp;
    temp=Head;

    End=(struct Node*)malloc(sizeof(struct Node));  

    End->data=data;
    End->Next=NULL;

    while(temp->Next!=NULL)
    {
        temp=temp->Next;
    }

    temp->Next=End;
}

void delete_first(struct Node* &Head)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp=Head;
    Head=Head->Next;
    free(temp);
    temp=NULL;
}

void delete_any(struct Node* &Head,int pos)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *temp;
    temp=Head;
    pos--;
    while(pos!=0)
    {
        temp=temp->Next;
    }
    ptr=temp;
    temp=temp->Next->Next;
    free(ptr);
    ptr=NULL;
}

void delete_last(struct Node* &Head)
{
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *temp;
    temp=Head;
    while(temp->Next!=NULL)
    {
        ptr=temp;
        temp=temp->Next;
    }
    ptr->Next=NULL;
    free(temp);
    temp=NULL;
}

int main()
{
    // struct Node *Head = NULL;
    // Head = (struct  Node*)malloc(sizeof(struct Node));

    struct Node *Head=(struct  Node*)malloc(sizeof(struct Node));
    struct Node *first=(struct  Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct  Node*)malloc(sizeof(struct Node));

    Head->data=18;
    Head->Next =first;

    first->data=19;
    first->Next=second;

    second->data=20;
    second->Next=NULL;

    cout<<endl<<Head->data<<" "<<Head->Next;
    cout<<endl<<&(first->data);
    // cout<<endl<<first->data<<" "<<first->Next;
    // cout<<endl<<second->data<<" "<<second->Next;
    
    cout<<endl<<Head->Next->Next;   //will point to the address of second node
    cout<<endl<<Head->Next->Next->Next;
    
    cout<<endl <<endl<<"Count of nodes: "<<count_of_nodes(Head);
    printLL(Head);

    

    cout<<endl<<"Enter the value to be put at the end: ";
    int edata;
    cin>>edata;

    add_at_end(Head,edata);
    cout<<endl <<endl<<"Count of nodes: "<<count_of_nodes(Head);
    printLL(Head);



    cout<<endl<<"Enter the value to be put at the begin: ";
    int idata;
    cin>>idata;

    add_at_begin(Head,idata);
    cout<<endl <<endl<<"Count of nodes: "<<count_of_nodes(Head);
    printLL(Head);



    cout<<endl<<"Enter the position and value: ";
    int data,pos;
    cin>>pos>>data;

    add_at_any_position(Head,data,pos);
    cout<<endl <<endl<<"Count of nodes: "<<count_of_nodes(Head);
    printLL(Head);

    cout<<endl<<"1.Delete start node 2.Delete end node 3.Delete any node ";
    int choice;
    cin>>choice;
    switch (choice)
    {
    case 1:
        delete_first(Head);
        printLL(Head);
        break;
        
    case 2:
        delete_last(Head);
        printLL(Head);
        break;

    case 3:
        cout<<endl<<"Enter which Node to Delete: ";
        int put;
        cin>>put;
        delete_any(Head,put);
        printLL(Head);
        break;
    
    default:
        break;
    }
    
    return 0;
}