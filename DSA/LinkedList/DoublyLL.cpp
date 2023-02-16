#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* pre;
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

    while(temp!= NULL)
    {
        cout<<endl<<temp->data<<" ";
        temp=temp->Next;
    }
}

struct Node* reverse_DLL(struct Node* &Head)
{
    struct Node *current=Head;
    struct Node *post=current->Next;

    current->Next=NULL;
    current->pre=post;

    while (post!=NULL)
    {
        post->pre=post->Next;
        post->Next=current;
        current=post;
        post=post->pre;
    }
    Head=current;
    return Head;
}

int main()
{
    struct Node *Head=(struct  Node*)malloc(sizeof(struct Node));
    struct Node *first=(struct  Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct  Node*)malloc(sizeof(struct Node));

    Head->data=18;
    Head->pre=NULL;
    Head->Next =first;

    first->data=19;
    first->pre=Head;
    first->Next=second;

    second->data=20;
    second->pre=first;
    second->Next=NULL;

    cout<<endl<<"Before reverse:";
    printLL(Head);

    cout<<endl<<"\nAfter reverse:";
    reverse_DLL(Head);
    printLL(Head);
}