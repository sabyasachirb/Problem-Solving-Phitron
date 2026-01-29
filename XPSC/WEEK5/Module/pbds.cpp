#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define nl '\n'
//current mode is for set (less)
//for multiset---> use (less_equal)

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin>>n;
    pbds<int >p;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        p.insert(x);
    }

    // int x = p.order_of_key(7);
    // cout<<x<<endl;



    auto it = p.find_by_order(3);
    cout<<*it<<endl;



    // for(auto val : p)
    // {
    //     cout<<val<<nl;
    // }
    return 0;
}