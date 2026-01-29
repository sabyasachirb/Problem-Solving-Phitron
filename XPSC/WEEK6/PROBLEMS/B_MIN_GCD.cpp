#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ios ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define nl "\n"
#define all for(int i=0;i<n;i++)
//current mode is for set
//for multiset---> use (less_equal)


void solve()
{
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    // ll min_val = *min_element(v.begin(), v.end());
    ll min_val = v[0];
    ll mlt = 0;
    for(int i=1; i<n; i++)
    {
        if(v[i]%min_val == 0)
        {
            mlt = __gcd(mlt, v[i]);
        }
    }
    if(mlt == min_val) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
}

int main()
{
    ios;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


