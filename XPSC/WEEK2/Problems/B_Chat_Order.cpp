#include <bits/stdc++.h>
using namespace std;
 
#define ll long long;
#define nl "\n";
 
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
 
    int t;
    cin>>t;
 
    map< string , int> mp;
    while(t--)
    {
        string s;
        cin>>s;
        mp[s] = t;
    }
    vector<pair<int, string>> v;
    auto it = mp.begin();
    while(it!=mp.end())
    {
        v.push_back({it->second, it->first});
        it++;
    }
    sort(v.begin(), v.end());
    for(auto &x : v)
    {
        cout<<x.second<<nl;
    }
    return 0;
}