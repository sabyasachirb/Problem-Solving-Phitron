#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin >> n;
    multiset<int> arr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.insert(x);
    }
    int ans = 0, problems = 1;
    while (!arr.empty()) {
        auto next_it = arr.lower_bound(problems);
        if (next_it != arr.end()) {
            ans++;
            arr.erase(next_it);
            problems++;
        } else {
            break;
        }
    }
    cout << ans << nl;
    return 0;
}