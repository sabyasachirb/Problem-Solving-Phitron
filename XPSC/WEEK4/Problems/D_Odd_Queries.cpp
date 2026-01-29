#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<long long> prefix_sum(n + 1, 0);
        for(int i = 1; i <= n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i - 1];
        }
        while(k--)
        {
            int l, r, cc;
            cin >> l >> r >> cc;
            long long int range_sum = prefix_sum[r] - prefix_sum[l - 1];
            long long int count = r - l + 1;
            long long int sum = prefix_sum[n] - range_sum + cc * count;
            if(sum % 2 == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }

        }
    }
    
    return 0;
}