#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
} NODE;

NODE *Insert(NODE *root, int num)
{
    NODE *newnode = (NODE *)malloc(sizeof(NODE));
    newnode->data = num;
    newnode->lchild = NULL;
    newnode->rchild = NULL;
    if (root == NULL)
    {
        root = newnode;
        return root;
    }
    NODE *temp = root;
    while (temp != NULL)
    {
        if (newnode->data < temp->data)
        {
            if (temp->lchild == NULL)
            {
                temp->lchild = newnode;
                break;
            }
            else
                temp = temp->lchild;
        }
        else
        {
            if (temp->rchild == NULL)
            {
                temp->rchild = newnode;
                break;
            }
            else
                temp = temp->rchild;
        }
    }
    return root;
}

NODE *Create(NODE *root)
{
    int n;
    printf("Enter the number of elements \n");
    scanf("%d", &n);
    int num;
    printf("Enter the elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        root = Insert(root, num);
    }
    return root;
}

NODE *InOrderPrecedence(NODE *temp)
{
    temp = temp->lchild;
    while (temp->rchild != NULL)
    {
        temp = temp->rchild;
    }
    return temp;
}

NODE *Delete(NODE *root, int value)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->lchild == NULL && root->rchild == NULL)
    {
        free(root);
        return NULL;
    }
    if (value < root->data)
    {
        root->lchild = Delete(root->lchild, value);
    }
    else if (value > root->data)
    {
        root->rchild = Delete(root->rchild, value);
    }
    else
    {
        NODE *iPre = InOrderPrecedence(root);
        root->data = iPre->data;
        root->lchild = Delete(root->lchild, iPre->data);
    }
    return root;
}

void in_order_traversal(NODE *root)
{
    if (root == NULL)
    {
        return;
    }
    in_order_traversal(root->lchild);
    printf("%d ", root->data);
    in_order_traversal(root->rchild);
}

NODE *search(NODE *root, int key)
{
    NODE *temp = root;
    if (root == NULL)
        return NULL;
    else
    {
        if (key == temp->data)
            return temp;
        else if (key < temp->data)
            search(temp->lchild, key);
        else
            search(temp->rchild, key);
    }
}

void pre_order_traversal(NODE *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        pre_order_traversal(root->lchild);
        pre_order_traversal(root->rchild);
    }
}

void post_order_traversal(NODE *root)
{
    if (root != NULL)
    {
        post_order_traversal(root->lchild);
        post_order_traversal(root->rchild);
        printf("%d ", root->data);
    }
}

void mirror(NODE *root)
{
    if (root != NULL)
    {
        mirror(root->lchild);
        mirror(root->rchild);
        NODE *temp;
        temp = root->lchild;
        root->lchild = root->rchild;
        root->rchild = temp;
    }
}

int main(void)
{
    NODE *root = NULL;
    int choice;
    int num;
    do
    {
        printf("Enter the choice :-");
        printf("\n\n1.Create BST. \n2.Insert element in BST. \n3.Delete element in BST. \n4.Search element in BST. \n5.Display.\n");
        scanf("%d", &choice);
        NODE *newnode = (NODE *)malloc(sizeof(NODE));
        switch (choice)
        {
        case 0:
            printf("Thank You\n");
            break;

        case 1:
            root = Create(root);
            break;

        case 2:
            printf("Enter the number you want to insert :- ");
            scanf("%d", &num);
            root = Insert(root, num);
            break;

        case 3:
            printf("Enter the value want to delete :- ");
            scanf("%d", &num);
            root = Delete(root, num);
            break;

        case 4:
            printf("Enter the key want to search :- ");
            scanf("%d", &num);
            newnode = search(root, num);
            if (newnode == NULL)
                printf("%d is not present. \n", num);
            else
                printf("%d is searched \n", num);
            break;
        case 5:
            printf("Inorder Traversal: \n");
            in_order_traversal(root);
            printf("\nPreorder-Traversal: \n");
            pre_order_traversal(root);
            printf("\nPostorder-Traversal: \n");
            post_order_traversal(root);
            break;
        case 6:
            printf("Mirror of BST \n");
            mirror(root);
            printf("Inorder Traversal: \n");
            in_order_traversal(root);
            printf("\nPreorder-Traversal: \n");
            pre_order_traversal(root);
            printf("\nPostorder-Traversal: \n");
            post_order_traversal(root);
            break;
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}

