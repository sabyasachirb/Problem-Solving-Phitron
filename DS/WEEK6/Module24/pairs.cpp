#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b)
{
    if(a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    vector<pair<string, int>> v;
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int x;
        cin>>s>>x;
        v.push_back(make_pair(s, x));
    }


    sort(v.begin(), v.end(), cmp);

    for(auto p : v)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

}