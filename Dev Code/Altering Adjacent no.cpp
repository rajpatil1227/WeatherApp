#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2==0)
    {
        for(int i=0;i<n;i+=2)
        {
                swap(a[i],a[i+1]);
        }
    }
    else
    {
        for(int i=0;i<n-1;i+=2)
        {
                swap(a[i],a[i+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
