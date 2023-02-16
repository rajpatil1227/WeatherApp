#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int ans=1;

    ans=n*(n-1);

    if( (__gcd(ans,(n-1)) )==1 ) 
        return ans=ans*(n-1);

    if( (__gcd(ans,(n-2)) )==1 ) 
        return ans=ans*(n-2);

    cout<<endl<<ans;
}
