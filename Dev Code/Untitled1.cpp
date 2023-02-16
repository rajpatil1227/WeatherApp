#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<string>v1,v2,v3;
        int a=0,b=0,c=0;
    
        unordered_map<string,int>mp;
    
        for(i=0;i<n;i++){
            string s;
            cin>>s;
            mp[s]++;
            v1.push_back(s);
        }
        for(i=0;i<n;i++){
            string s;
            cin>>s;
            mp[s]++;
            v2.push_back(s);
        }
        for(i=0;i<n;i++){
            string s;
            cin>>s;
            mp[s]++;
            v3.push_back(s);
        }
    
        for(auto s: v1){
            if(mp[s]==1){
                a+=3;
            }
            else if(mp[s]==2){
                a+=1;
            }
        }
        for(auto s: v2){
            if(mp[s]==1){
                b+=3;
            }
            else if(mp[s]==2){
                b+=1;
            }
        }
        for(auto s: v3){
            if(mp[s]==1){
                c+=3;
            }
            else if(mp[s]==2){
                c+=1;
            }
        }
    
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
