#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin>>s;
    map<char, int> mp;
    for(char c : s)
    {
        mp[c]++;
    }
    int odd_count = 0;
    char odd_char;
    for(auto &[key, value]: mp)
    {
        if(value %2 != 0)
        {
            odd_count++;
            odd_char = key;
        }
    }

    if(odd_count > 1)
    {
        cout << "NO SOLUTION" << nl;
    }
    else
    {
        string ss = "";
        for(auto &[key, value]: mp)
        {
            ss += string(value/2, key);
        }
        string ans = ss;
        if(odd_count == 1)
        {
            ans += string(1, odd_char);
        }
        
        reverse(ss.begin(), ss.end());
        ans += ss;
        cout<<ans<<nl;

    }
    return 0;
}