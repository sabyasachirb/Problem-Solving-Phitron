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
    deque<int> perm(n);
    all{
        cin>>perm[i];
    }
    int left=0;
    while(left<n && perm[left]==n-left){
        left++;
    }
    if(left == n){
        for(auto val: perm){
            cout<<val<<" ";
        }
        cout<<nl;
        return;
    }
    int right = left;
    for(int i=left; i<n; i++){
        if(perm[i]==n - left){
            right = i;
            break;
        }
    }
    reverse(perm.begin()+left, perm.begin()+right+1);
    
    for(auto val: perm){
        cout<<val<<" ";
    }
    cout<<nl;
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


