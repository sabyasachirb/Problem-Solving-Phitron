#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        sort(a.begin(), a.end());

        long long ans = 0;
        int i = 0;
        int prev_val = INT_MIN;
        int prev_count = 0;

        while (i < n) {
            int j = i + 1;
            while (j < n && a[j] == a[i]) ++j;
            int cnt = j - i;           
            int val = a[i];

            if (prev_val == INT_MIN) {
                ans += cnt;
            } else if (val == prev_val + 1) {
                if (cnt > prev_count) ans += (cnt - prev_count);
            } else {
                ans += cnt;
            }

            prev_val = val;
            prev_count = cnt;
            i = j;
        }

        cout << ans << '\n';
    }
    return 0;
}
