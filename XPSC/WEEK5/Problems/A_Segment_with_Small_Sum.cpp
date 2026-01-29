#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long n, s;
    cin >> n >> s;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max_sum = 0;
    long long current_sum = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        current_sum += arr[right];
        while (current_sum > s) {
            current_sum -= arr[left];
            left++;
        }
        max_sum = max(max_sum, right - left + 1);
    }

    cout << max_sum << "\n";

    return 0;
}