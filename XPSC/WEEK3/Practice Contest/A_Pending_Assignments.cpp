#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y,z;
        cin >> x >> y >> z;
        int total_time = z*24*60;
        if(x*y <= total_time) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
    return 0;
}