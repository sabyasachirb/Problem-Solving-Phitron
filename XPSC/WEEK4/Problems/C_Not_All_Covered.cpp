#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        arr[l] += 1;
        if (r + 1 <= n)
            arr[r + 1] -= 1;
    }
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1];
    }
    int min_val = arr[1];
    for(int i = 1; i <= n; i++)
    {
        min_val = min(min_val, arr[i]);
    }
    cout << min_val << "\n";
    
    return 0;
}