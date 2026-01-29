#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int min_c = min({x,y,z});
        int ans = min_c * 10;
        x = x - min_c;
        y = y - min_c;
        z = z - min_c;
        ans = ans + (x*3) + (y*3) + (z*3);
        cout << ans << nl;
    }
    
    return 0;
}