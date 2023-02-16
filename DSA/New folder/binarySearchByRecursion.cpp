#include <iostream>
using namespace std;

bool BinarySearch(int arr[],int s, int e, int key)
{
    if(s>e)
        return false;

    int mid = s +(e-s)/2;

    if(arr[mid]==key)
    {
        return true;
    }
    else if(arr[mid]>key)
    {
        return BinarySearch(arr,s,mid-1,key);
    }
    else
    {
        return BinarySearch(arr,mid+1,e,key);
    }
}

int main()
{
    int arr[]={2,4,6,8,9,10};
    int size= 6;
    int key=10;
    bool ans = BinarySearch(arr,0,size-1,key);
    if(ans)
    {
        cout<<endl<<"Present"<<endl;
    }
    else
    {
        cout<<endl<<"Absent"<<endl;
    }
    return 0;
}