#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int start=1;
    int end=n-1;
    int j=0;
    while(start<end && start>j)
    {
        if(a[start]+a[end]+a[j]==9)
        {
            cout<<a[j]<<" "<<a[start]<<" "<<a[end]<<endl;
            end--;
            start++;
            j++;
        }
        else if(a[start]+a[end]+a[j]<9)
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
