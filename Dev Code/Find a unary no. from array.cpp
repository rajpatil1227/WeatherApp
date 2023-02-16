#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int ans=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        ans=ans^a[i];
    }
    cout<<ans;

    return 0;
}
