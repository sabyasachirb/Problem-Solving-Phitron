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
    int n, s, x;
    cin >> n >> s >> x;
    vector<int> arr(n);
    ll sum = 0;
    all{
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum == s){
        cout << "YES" << nl;
        return;
    }
    else if(sum < s && s-sum == x){
        cout << "YES" << nl;
        return;
    }
    else if(sum <s && (s - sum) % x == 0){
        cout << "YES" << nl;
        return;
    }
    else{
        cout << "NO" << nl;
        return;
    }
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


