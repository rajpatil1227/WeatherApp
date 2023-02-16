#include <bits/stdc++.h>
using namespace std;

int main()
{
   vector <int> v;
   int n;
   cin>>n;
   
   for(int i=0;i<n;i++)
   {
   	int x;
   	cin>>x;
   	v.push_back(x);
   }
   
   for(int i=0;i<n;i++)
   {
   	cout<<v[i]<<" ";
   }
   
   vector <int> :: iterator it = v.begin();
   cout<<endl;
   cout<<endl;
   cout<<(*it)<<endl;       //print 2
   cout<<(*(it+1))<<endl;   //print 5
   cout<<endl;
   cout<<endl;
   for(it=v.begin(); it!=v.end(); it++)
   {
    cout<<(*it)<<endl;
   }
}
