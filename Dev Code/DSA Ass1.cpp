#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    struct node *lchild;
    struct node *rchild;
    char data;
} tree;

typedef struct node1
{
    struct node1 *next;
    tree *ptr;
} stack;

stack *push(stack *p, tree *n)
{
    stack *temp = (stack *)malloc(sizeof(stack));
    temp->ptr = n;
    temp->next = NULL;
    if (p == NULL)
    {
        p = temp;
    }
    else
    {
        temp->next = p;
        p = temp;
    }
    return p;
}

stack *pop(stack *p)
{
    if (p == NULL)
    {
        printf("Stack underflow");
        return p; // NULL
    }
    else
    {
        stack *temp = p;
        p = p->next;
        free(temp);
        return p;
    }
}
tree *read_top(stack *p)
{
    return p->ptr;
}

tree *postfix_exp(tree *root)
{
    stack *top = NULL;
    char str[20];
    printf("Enter the Postfix expression : ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        tree *exp_tree = (tree *)malloc(sizeof(tree));
        exp_tree->data = str[i];
        exp_tree->lchild = NULL;
        exp_tree->rchild = NULL;
        if (isalpha(str[i])) // if(str[i]>='a' && str[i]<='z')
        {
            top = push(top, exp_tree);
        }
        else
        {
            exp_tree->rchild = read_top(top);
            top = pop(top);
            exp_tree->lchild = read_top(top);
            top = pop(top);

            top = push(top, exp_tree);
        }
    }
    root = read_top(top);
    top = pop(top);
    return root;
}

tree *prefix_exp(tree *root)
{
    stack *top = NULL;
    char str[20];
    printf("Enter the Prefix expression : ");
    scanf("%s", str);

    strrev(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        tree *exp_tree = (tree *)malloc(sizeof(tree));
        exp_tree->data = str[i];
        exp_tree->lchild = NULL;
        exp_tree->rchild = NULL;
        if (isalpha(str[i]))
        {
            top = push(top, exp_tree);
        }
        else
        {
            exp_tree->lchild = read_top(top);
            top = pop(top);
            exp_tree->rchild = read_top(top);
            top = pop(top);

            top = push(top, exp_tree);
        }
    }
    root = read_top(top);
    top = pop(top);
    return root;
}

void inorder(tree *root)
{
    if (root != NULL)
    {
        inorder(root->lchild);
        printf("%c", root->data);
        inorder(root->rchild);
    }
}

void preorder(tree *root)
{
    if (root != NULL)
    {
        printf("%c", root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void postorder(tree *root)
{
    if (root != NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%c", root->data);
    }
}

int main()
{
    tree *r = NULL;
    int ch;

    do
    {
        printf("\n1. Create Expression Tree from Postfix Expression\n");
        printf("2. Create Expression Tree from Prefix Expression\n");
        printf("3. Inorder Traversal \n4. Preorder Traversal\n5. Postorder Traversal\n0. Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            r = postfix_exp(r);
            break;
        case 2:
            r = prefix_exp(r);
            break;
        case 3:
            printf("Inorder Traversal : ");
            inorder(r);
            break;
        case 4:
            printf("Preorder Traversal : ");
            preorder(r);
            break;
        case 5:
            printf("Postorder Traversal : ");
            postorder(r);
            break;
        default:
            break;
        }

    } while (ch != 0);
}
