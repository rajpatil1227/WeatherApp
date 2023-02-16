#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node *buildtree(node* root)
{
    cout<<"Enter the Data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter data to insert at left: "<<data<<endl;
    root->left=buildtree(root->left);

    cout<<"Enter data to insert at Right: "<<data<<endl;
    root->right=buildtree(root->right);

    return root;
}

void levelOrderTraversal(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;                                       //for new level
            if(!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root)
{
    //base case
    if(root ==NULL)
        return ;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root)
{
    //base case
    if(root ==NULL)
        return ;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    //base case
    if(root ==NULL)
        return ;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root=NULL;

    root=buildtree(root);

    cout<<"Printing the level order traversal output: "<<endl;
    levelOrderTraversal(root);

    cout<<"\nInorder:"<<endl;
    inorder(root);

    cout<<"\nPreorder:"<<endl;
    preorder(root);
    
    cout<<"\nPostorder:"<<endl;
    postorder(root);

    return 0;
}