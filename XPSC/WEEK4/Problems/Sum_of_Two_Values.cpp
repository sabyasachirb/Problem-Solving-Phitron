#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, val;
    cin >> n >> val;
    vector<pair<int, int>> a;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    for(int i = 0, j = n - 1; i < j; )
    {
        int sum = a[i].first + a[j].first;
        if(sum == val)
        {
            cout << a[i].second << " " << a[j].second << nl;
            return 0;
        }
        else if(sum < val)
            i++;
        else
            j--;
    }
    cout << "IMPOSSIBLE" << nl;
    return 0;
}