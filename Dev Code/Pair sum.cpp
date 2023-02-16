#include <iostream>

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
    cout<<"Pairs are:\n";
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==b)
                cout<<a[i]<<" "<<a[j]<<endl;
        }
    }

    return 0;
}
