#include <stdio.h>
int max, min;
void find(int i, int j, int a[])
{
    int max1, min1, mid;
    if (i == j)
    {
        max = min = a[i];
    }
    else
    {
        if (i == j - 1)
        {
            if (a[i] < a[j])
            {
                max = a[j];
                min = a[i];
            }
            else
            {
                max = a[i];
                min = a[j];
            }
        }
        else
        {
            mid = (i + j) / 2;
            find(i, mid, a);
            max1 = max;
            min1 = min;
            find(mid + 1, j, a);
            if (max < max1)
                max = max1;
            if (min > min1)
                min = min1;
        }
    }
}
int main()
{
    int i, num;
    int a[100];
    printf("\nEnter the size of array : ");
    scanf("%d", &num);
    printf("Enter the numbers : ");
    for (i = 1; i <= num; i++)
        scanf("%d", &a[i]);
    max = a[0];
    min = a[0];
    find(1, num, a);
    printf("Minimum element in an array : %d\n", min);
    printf("Maximum element in an array : %d\n", max);
    return 0;
}
