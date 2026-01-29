#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if(!(cin >> t))
        return 0;
    while(t--)
    {
        int x, y, z;
        cin>> x >> y >> z;
        int L = max(x - y, x - z);
        int R = min(x + y, x + z);
        if(L>R)
        {
            cout << 0 << '\n';
            continue;
        }
        int cnt = R - L + 1;
        if(L <= x && x <= R)
            cnt--;
        cout << max(0, cnt) <<'\n';
    }
    return 0;
}
