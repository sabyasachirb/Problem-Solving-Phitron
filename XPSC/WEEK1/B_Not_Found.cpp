#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int n = s.length();
    set<char> st;
    for(int i=0; i<n; i++)
    {
        st.insert(s[i]);
    }
    string ans = "None";
    for(char c='a'; c<='z'; c++)
    {
        if(st.find(c) == st.end())
        {
            ans = c;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}