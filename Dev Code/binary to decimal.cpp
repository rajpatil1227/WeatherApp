#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the binary number: ";
    cin>>n;
    int ans=0,i=0;
    while(n!=0)
    {
        int digit = n%10;
        
        if(digit==1)
        {
            ans = pow(2,i)+ans;
        }

//        ans = (digit *pow(2,i))+ans;
//        i++;
//        n=n/10;

        i++;
        n=n/10;
    }
    cout<<"It's decimal: "<<ans;
    return 0;
}
