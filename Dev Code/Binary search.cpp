#include <iostream>

using namespace std;

int binarysearch(int a[],int n,int search)
{
   int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        if(search<a[mid])
        {
            high=mid-1;
            mid=(low+high)/2;
        }
        else if(search>a[mid])
        {
            low=mid+1;
            mid=(low+high)/2;
        }
        else
        {
            //cout<<"Element is searched";
            return mid;
        }
    } 
    return -1;
}

int main()
{
    int a[100],n,search;
    cout<<"Enter the no. of elements: ";
    cin>>n;
    cout<<"Enter the array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the search element: ";
    cin>>search;
    
    int result=binarysearch(a,n,search);
    (result==-1) ? cout<<"Not present" : cout<<"Searched";

    return 0;
}
