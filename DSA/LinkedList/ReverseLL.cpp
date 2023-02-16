#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *Next;
};

struct Node * reverse_through_recursion(struct Node* Head)
{
    //base case
    if( Head==NULL || Head->Next==NULL)
        return Head;

    struct Node* newhead =reverse_through_recursion(Head->Next);
    Head->Next->Next=Head;
    Head->Next=NULL;

    return newhead;
    
}

// void reverse_through_recursion_second_approach(struct Node* Head,struct Node* current,struct Node* pre)
// {
//     //base case
//     if(current=NULL)
//     {
//         Head=pre;
//         return ;
//     }

//     struct Node* post=current->Next;
//     reverse_through_recursion_second_approach(Head,post,current);
//     current->Next=pre;                      //reversed the link    | | <--- | |
// }

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

    Head->data=18;
    Head->Next =first;

    first->data=19;
    first->Next=second;

    second->data=20;
    second->Next=NULL;

    cout<<"\nBefore Reverse:";

    printLL(Head);

    // struct Node *pre=NULL;
    // struct Node *current=Head;
    // struct Node *post;

    // while(current!=NULL)
    // {
    //     post=current->Next;
    //     current->Next=pre;      //reversed the link    | | <--- | |

    //     pre=current;
    //     current=post;
    // }
    // Head=pre;

    // cout<<"\n\nAfter Reverse:";

    // printLL(Head);

    struct Node* newhead=reverse_through_recursion(Head);
    printLL(newhead);

    // struct Node *pre=NULL;
    // struct Node *current=Head;

    // reverse_through_recursion_second_approach(Head,current,pre);
    //printLL(Head);
}