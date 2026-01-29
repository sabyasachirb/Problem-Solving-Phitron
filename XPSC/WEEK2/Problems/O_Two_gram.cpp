#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define nl "\n";

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin>>n;
    map<string, int> mp;
    string ss;
    cin>> ss;
    for(int i = 0; i<n-1; i++)
    {
        string s = ss.substr(i,2);
        mp[s]++;
    }
    vector<pair<int, string>> vv;
    for(auto &it: mp)
    {
        vv.push_back({it.second, it.first});
    }
    sort(vv.begin(), vv.end());
    cout<<vv[vv.size()-1].second<<nl;
    return 0;
}