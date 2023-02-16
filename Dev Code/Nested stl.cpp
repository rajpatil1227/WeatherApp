#include <bits/stdc++.h>
using namespace std;

int main()
{
   map< pair<string,string>,vector<int> > m;
   cout<<"Enter the no do you want to print: ";
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
      string f,l;
      int ct;
      cout<<"Enter the first name and last name: ";
      cin>>f>>l;
      cout<<"Enter the no of list of subjects: ";
      cin>>ct;
      cout<<"Enter the subjects marks:\n";
      for (int j = 0; j < ct; j++)
      {
         int x;
         cin>>x;
         m[{f,l}].push_back(x);
      }
      
   }
   cout<<endl;
   for(auto &p : m)
   {
      auto &full_name=p.first;
      auto &list=p.second;
      cout<<full_name.first<<" "<<full_name.second<<endl;
      //cout<<list.size()<<endl;
      for(auto &element : list)
      {
         cout<<element<<" ";
      }
      cout<<endl;
   }
   
   return 0;
}
