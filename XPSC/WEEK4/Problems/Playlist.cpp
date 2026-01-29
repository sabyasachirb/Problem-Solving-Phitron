#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin >> n;
    map<int, int> last_index;
    int ans = 0;
    for(int j=1, i=1; j<=n; j++)
    {
        int x;
        cin >> x;
        i = max(i, last_index[x] + 1);
        last_index[x] = j;
        ans = max(ans, j - i + 1);
    }
    cout << ans << nl;
    
    return 0;
}