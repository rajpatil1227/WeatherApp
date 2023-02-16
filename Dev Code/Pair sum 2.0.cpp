#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[100];
    int n,i,j,b;
    cout<<"Enter no. of elements of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the sum no.: ";
    cin>>b;
    sort(a,a+n);
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(a[start]+a[end]==b)
        {
            cout<<a[start]<<" "<<a[end]<<endl;
            end--;
            start++;
        }
        else if(a[start]+a[end]<b)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    return 0;
}
