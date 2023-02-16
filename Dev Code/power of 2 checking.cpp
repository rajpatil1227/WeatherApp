#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<=30;i++)
    {
        
        if(ans==n)
        {
            cout<<"It is a power of 2";
            break;
        }
        ans = ans*2;  
    }
	if(ans!=n)
	{
		cout<<"No";
	}
    return 0;
}
