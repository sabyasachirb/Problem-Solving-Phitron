#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        stack<char>st;
        string s;
        cin >> s;
        for(char c : s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if(st.top() == c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        cout<<st.size()<<endl;
        
    }
    return 0;
}