#include <iostream>

using namespace std;

int main()
{
    int a[]={4,2,10,1,8,6};
    for(int i=1;i<6;i++)
    {
        int temp=a[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(a[j]>temp)
            {
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=temp;
    }
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}