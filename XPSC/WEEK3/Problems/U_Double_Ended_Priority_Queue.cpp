#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, t;
    cin>>n>>t;
    multiset<int> ms;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }
    while(t--)
    {
        int type;
        cin>>type;
        if(type == 0)
        {
            int val;
            cin>>val;
            ms.insert(val);
        }
        else if(type == 1)
        {
            if(!ms.empty())
            {
                cout<<*ms.begin()<<nl;
                ms.erase(ms.begin());
            }
        }
        else
        {
            if(!ms.empty())
            {
                auto it = --ms.end();
                cout<<*it<<nl;
                ms.erase(it);
            }
        }
    }
    return 0;
}