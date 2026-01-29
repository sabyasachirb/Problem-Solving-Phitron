#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ml;
    vector<int>ans;
    int i = 1;
    while(t--)
    {
        int a;
        cin>>a;
        if(a == 1)
        {
            int val;
            cin>>val;
            s.insert({i, val});
            ml.insert({val, -i});
            i++;
        }
        else if(a == 2)
        {
            int val = s.begin()->second;
            int pos = s.begin()->first;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({val, -pos});
            
        }
        else
        {
            int pos = - ml.rbegin()->second;
            int val = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos, val});
            
        }
    }
    for(auto &it : ans)
    {
        cout<<it<<" ";
    }
    return 0;
}