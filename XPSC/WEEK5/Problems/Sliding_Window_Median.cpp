#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define nl '\n'
//current mode is for set
//for multiset---> use (less_equal)

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int l=0;
    pbds<pair<int, int>> p;
    for(int r=0; r<n; r++)
    {
        p.insert({arr[r], r});
        if(r-l+1 == k)
        {
            int pos = k/2;
            if(k%2==0)
            {
                pos--;
            }
            auto it = p.find_by_order(pos);
            cout << it->first<< " ";
            p.erase({arr[l],l});
            l++;
        }
    }
    return 0;
}