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
    int left=0;
    int right=n-1;
    while(left<right)
    {
        while(a[left]==0 && left<right)
            left++;
        while(a[right]==1 && left<right)
            right--;
        swap(a[left],a[right]);
        left++;
        right--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
