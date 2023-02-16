#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<int,multiset<string>> m;
  int n;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
      int marks;
      string name;
      cin>>marks>>name;
      m.[-1*marks].insert(name);
  }
  for(auto &p:m)
  {
      auto &name = p.second;
      int marks = p.first;
      for(auto student: name)
         cout<<student<<" "<<marks;
      cout<<endl;
  }

   return 0;
}
