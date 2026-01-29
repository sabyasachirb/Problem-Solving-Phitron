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
    int n, q;
    cin >> n >> q;
    vector<int> a(n), b(n), c(n);
    all{
        cin >> a[i];
    }
    all{
        cin >> b[i];
    }
    all{
        c[i] = max(a[i], b[i]);
    }
    vector<ll> im(n);
    im[n-1] = c[n-1];
    for(int i=n-2; i>=0; i--){
        im[i] = max(im[i+1], 1LL*c[i]);
    }
    vector<ll> prefix_sum(n+1, 0);
    for(int i=0; i<n; i++){
        prefix_sum[i+1] = prefix_sum[i] + im[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        ll sum = prefix_sum[r+1] - prefix_sum[l];
        cout << sum << " ";
    }
    cout << nl;
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


