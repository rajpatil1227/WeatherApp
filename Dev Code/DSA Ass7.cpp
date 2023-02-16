#include <stdio.h>
void swap(int heap[], int x, int y)
{
    int temp = heap[x];
    heap[x] = heap[y];
    heap[y] = temp;
}
void heap_up(int heap[], int i)
{
    int parent = (i - 1) / 2;
    if (heap[i] > heap[parent] && i > 0)
    {
        swap(heap, parent, i);
        heap_up(heap, parent);
    }
}
void create(int heap[], int size)
{
    int n;
    printf("Enter %d numbers to insert in heap: ",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &n); 
        heap[i] = n;
        heap_up(heap, i);
    }
}
void heap_down(int heap[], int i, int last)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;
    if (l <= last && heap[i] < heap[l])
        largest = l;
    if (r <= last && heap[i] < heap[r] &&
        heap[r] > heap[l])
        largest = r;
    if (largest != i)
    {
        swap(heap, i, largest);
        heap_down(heap, largest, last);
    }
}
void delete (int heap[], int size)
{
    do
    {
        swap(heap, 0, size - 1);
        size--;
        heap_down(heap, 0, size - 1);
    } while (size > 0);
}
void display(int heap[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", heap[i]);
}
int main()
{
    int size;
    int heap[10];
    printf("Enter size of heap : ");
    scanf("%d", &size);
    printf("\n");
    create(heap, size);
    printf("\nMax heap : ");
    display(heap, size);
    printf("\n");
    delete (heap, size);
    printf("Sorted numbers : ");
    display(heap, size);
    printf("\n");
}
