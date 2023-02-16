#include <stdio.h>

void accept(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d in array :\n", i + 1);
        scanf("%d", &p[i]);
    }
}

void display(int p[], int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", p[i]);
    }
    printf("}\n");
}

void union_function(int arr1[], int arr2[], int l1, int l2)
{

    int i, j, k = 0;
    int union_arr[100];
    for (i = 0; i < l1; i++)
    {
        union_arr[k] = arr1[i];
        k++;
    }
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < l1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                break;
            }
        }
        if (j == l1)
        {
            union_arr[k] = arr2[i];
            k++;
        }
    }
    printf("{");
    for (int i = 0; i < k; i++)
    {
        printf(" %d", union_arr[i]);
    }
    printf("}\n");
}

void intersection_function(int arr1[], int arr2[], int l1, int l2)
{
    int inter_arr[100];
    int i, j, k = 0;
    for (int i = 0; i < l1; i++)
    {
        for (int j = 0; j < l2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                inter_arr[k] = arr1[i];
                k++;
            }
        }
    }

    printf("{");
    for (int i = 0; i < k; i++)
    {
        printf(" %d", inter_arr[i]);
    }
    printf("}\n");
}

void difference_function(int arr1[], int arr2[], int l1, int l2)
{
    int i, j, k = 0;
    int n=0;
    int diff_ab[100];
    int diff_ba[100];
    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < l2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                break;
            }
        }
        if(j==l2){
            diff_ab[k]=arr1[i];
            k++;
        }
    }
    printf("A - B = ");
    printf("{");
    for (int i = 0; i < k; i++)
    {
        printf(" %d", diff_ab[i]);
    }
    printf("}\n");

    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < l1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                break;
            }
        }
        if(j==l1){

            diff_ba[n]=arr2[i];
            n++;
        }
    }
    printf("B - A = ");
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", diff_ba[i]);
    }
    printf("}\n");
}

void sym_diff_function(int arr1[], int arr2[], int l1, int l2)
{
    int i, j, k = 0;
    int sym[100];
    for (i = 0; i < l1; i++)
    {
        for (j = 0; j < l2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                break;
            }
        }
        if(j==l2){
            sym[k]=arr1[i];
            k++;
        }
    }
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < l1; j++)
        {
            if (arr2[i] == arr1[j])
            {
                break;
            }
        }
        if(j==l1){
            sym[k]=arr2[i];
            k++;
        }
    }
    printf("{");
    for (int i = 0; i < k; i++)
    {
        printf(" %d", sym[i]);
    }
    printf("}\n");
}



int main()
{
    int n, l, m;
    int arr1[100], arr2[100];
    int union_arr[100];
    int int_arr[100];
    printf("For first Set ->\n");
    printf("Enter the length of first set\n");
    scanf("%d", &l);
    accept(arr1, l);
    printf("Set A : ");
    display(arr1, l);
    printf("For Second Set ->\n");
    printf("Enter the length of first set\n");
    scanf("%d", &m);
    accept(arr2, m);
    printf("Set B : ");
    display(arr2, m);

    printf("A union B : ");
    union_function(arr1, arr2, l, m);
    printf("A intersection B : ");
    intersection_function(arr1, arr2, l, m);
    difference_function(arr1, arr2, l, m);
    printf("Symmetric difference of A and B : ");
    sym_diff_function(arr1, arr2, l, m);
    return 0;
}
 
 
 
 
 
