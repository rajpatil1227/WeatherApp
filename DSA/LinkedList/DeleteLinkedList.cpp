#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

void printLL(struct Node *Head)
{
    if(Head==NULL)
    {
        cout<<endl<<"Linked List is empty";
        return ;
    }
    
    struct Node *temp=NULL;
    temp=Head;

    cout<<endl<<"Values are:";

    while(temp != NULL)
    {
        cout<<endl<<temp->data<<" ";
        temp=temp->Next;
    }
}

int main()
{
    struct Node *Head=(struct  Node*)malloc(sizeof(struct Node));
    struct Node *first=(struct  Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct  Node*)malloc(sizeof(struct Node));

    struct Node* temp=Head;

    Head->data=18;
    Head->Next =first;

    first->data=19;
    first->Next=second;

    second->data=20;
    second->Next=NULL;

    cout<<"\nBefore Deletion:";

    printLL(Head);

    while(temp!=NULL)
    {
        temp=temp->Next;
        free(Head);
        Head=temp;
    }

    cout<<"\n\nAfter Deletion:";

    printLL(Head);
}