#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int m, n;
    cin >> m >> n;
    multiset<int> tickets;
    for(int i = 0; i < m; i++)
    {
        int price;
        cin >> price;
        tickets.insert(price);
    }
    for(int i = 0; i<n; i++)
    {
        int desired_price;
        cin >> desired_price;
        auto it = tickets.upper_bound(desired_price);
        if(it == tickets.begin())
        {
            cout << -1 << nl;
        }
        else
        {
            --it;
            cout << *it << nl;
            tickets.erase(it);
        }
    }
    
    return 0;
}