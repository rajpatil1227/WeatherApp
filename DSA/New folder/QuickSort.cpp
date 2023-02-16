#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int start,int end)
{
    int pivot = a[start];
    int count=0;

    for(int i=start+1;i<=end;i++)
    {
        if(a[i]<=pivot)
            count ++;
    }

    int pivotIndex = count + start;
    swap(a[start],a[pivotIndex]);

    int i=start, j=end;
    while( i<pivotIndex && j>pivotIndex )
    {
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if( i<pivotIndex && j>pivotIndex )
            swap(a[i++], a[j--]);
    }
    return pivotIndex;
}

void quicksort(int a[],int start, int end)
{
    //base case
    if(start >end)
        return ;
    
    //partinioning
    int p=partition(a,start,end);

    //left part sort after locating pivot element to it's right place
    quicksort(a,start,p-1);

    //right part sort
    quicksort(a,p+1,end);
}

int main()
{
    int a[]={4,2,6,3,1};
    int n=5;

    quicksort(a,0,n-1);
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}