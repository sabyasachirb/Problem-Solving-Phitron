#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define nl "\n";

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin>>s;
    deque<char>st;
    for(char c: s)
    {
        if(c == '<')
        {
            if(!st.empty())
                st.pop_back();
        }
        else
            st.push_back(c);
    }
    for(char c: st)
        cout<<c;
    
    return 0;
}