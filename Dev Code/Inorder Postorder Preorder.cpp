#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
    struct node* node
        = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return (node);
}
 
void printPostorder(struct node* node)
{
    if (node == NULL)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    printf("%d ", node->data);
}
 
/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    printf("%d ", node->data);
 
    /* now recur on right child */
    printInorder(node->right);
}
 
/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node* node)
{
    if (node == NULL)
        return;
 
    /* first print data of node */
    printf("%d ", node->data);
 
    /* then recur on left subtree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}
 
/* Driver program to test above functions*/
int main()
{
    struct node* root = newNode(50);
    root->left = newNode(17);
    root->left->left = newNode(12);
    root->left->right = newNode(23);
    root->left->left->left = newNode(9);
    root->left->left->right = newNode(14);
    root->left->right->right = newNode(19);
    
    root->right = newNode(72);
    root->right->left = newNode(54);
    root->right->right = newNode(76);
    root->right->left->right = newNode(67);
 
    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);
 
    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);
 
    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);
 
    getchar();
    return 0;
}
