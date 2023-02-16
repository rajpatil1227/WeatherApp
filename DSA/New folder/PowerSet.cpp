#include <bits/stdc++.h>
using namespace std;

vector <vector<int>> subsets(vector<int>& nums)
{

}

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector <vector<int>> target = subsets(v);
    
}