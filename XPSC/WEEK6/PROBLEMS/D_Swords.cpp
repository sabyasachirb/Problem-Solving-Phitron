#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

        int n;
        cin >> n;
        vector<int> arr(n);
        int max_val = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            max_val = max(max_val, arr[i]);
        }
        long long sum = 0;
        int gc = 0;
        for(int i = 0; i < n; i++)
        {
            int h = (max_val - arr[i]);
            sum += h;
            gc = gcd(gc, h);
        }
        cout << sum / gc << " " << gc << "\n";
    
    return 0;
}