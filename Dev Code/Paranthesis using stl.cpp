#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<char,int> m = { {'(',-1} , {'[',-2} , {'{',-3} , {')',1} , {']',2} , {'}',3} };
    string s;
    cout<<"Enter the paranthesis string: ";
    cin>>s;
    stack<char> st;
    for(char i:s)
    {
        if(m[i]<0)
        {
            st.push(i);
        }
        else
        {
            char top;
            if(!st.empty())
            {
                top = st.top();
                st.pop();
            }
            if(m[top]+m[i] !=0)   
                return 0;
            
        }
    }
    if(st.empty())
        cout<<"YES";

    return 0;
}
