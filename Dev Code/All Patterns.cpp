#include <iostream>

using namespace std;

int main()
{
    /*int i,j,n;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        int val=i;
        for(j=1;j<=i;j++)
        {
            //char c = 'A'+j-1;
            cout<<val;
            val++;
        }
        cout<<endl;
    }
    Output= 1
    	23
    	345
    	4567
    */
    
    int i,j,n;
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        int val=i;
        for(j=1;j<=i;j++)
        {
            char c = 'A'+val-1;
            cout<<c;
            val++;
        }
        cout<<endl;
    }
    /*Output= A
    	BC
    	CDE
    	DEFG
    */
    
    return 0;
}
