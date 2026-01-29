#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;
    vector<long long> freq(200001, 0);
    for (int i = 1; i <= n; i++)
    {
        long long l, r;
        cin >> l >> r;
        
        freq[l]++;
        freq[r + 1]--;
        
    }
    for (int i = 1; i <= 200000; i++)
    {
        freq[i] += freq[i - 1];
    }
    vector<long long> prefix_count(200001, 0);
    for (int i = 1; i <= 200000; i++)
    {
        prefix_count[i] = prefix_count[i - 1];
        if (freq[i] >= k)
        {
            prefix_count[i]++;
        }
    }
    for(int i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;
        long long count = prefix_count[r] - prefix_count[l - 1];
        
        cout << count << "\n";
    }
    
    return 0;
}