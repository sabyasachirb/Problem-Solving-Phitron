#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        // vector<ll> v_c(n);
        // bool flag = true;
        // v_c = v;
        // for(int i=0; i<m; i++)
        // {
            
        //     ll bi, ci;
        //     cin>>bi>>ci;
        //     v_c[bi-1] = v_c[bi-1]+ci;
        //     if(v_c[bi-1]>h)
        //     {
        //         v_c = v;
        //     }
        // }
        // for(int i =0; i<n; i++)
        // {
        //     cout<<v_c[i]<<" ";
        // }
        // cout<<'\n';


        vector<pair<ll, int>> vers(n, {0,0});
        int version = 0;
        for(int i=0; i<m; i++)
        {
            ll bi, ci;
            cin>>bi>>ci;
            bi--;
            if(vers[bi].second != version)
            {
                vers[bi] = {ci, version};
            }
            else
            {
                vers[bi].first+=ci;
            }

            if(vers[bi].first + v[bi] > h)
            {
                version++;
            }
        }

        for(int i=0; i<n; i++)
        {
            if(vers[i].second == version)
            {
                cout<<v[i]+ vers[i].first<<" ";
            }
            else
            {
                cout<<v[i]<<" ";
            }
        }
        cout<<'\n';

    }
    return 0;
}