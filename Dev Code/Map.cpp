#include <bits/stdc++.h>
using namespace std;

int main()
{
   map <int , string> m;
   m[1]= "abc";
   m[5]= "def";
   m[3]= "xyz";
   m.insert({4,"pqr"});
   
//   map <int ,string> :: iterator it;
//   for(it=m.begin();it!=m.end();it++)
//   {
//      cout<<(*it).first<<" "<<(*it).second<<endl;
//   }

	for(auto &i:m)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
}
