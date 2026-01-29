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
    long long good_segments = 0;
    long long current_sum = 0;
    int left = 0;
    for (int right = 0; right < n; right++) {
        current_sum += arr[right];
        if (current_sum <= s) 
        {
            good_segments += (right - left + 1);
        }
        else
        {
            while (current_sum > s && left <= right)
            {
                current_sum -= arr[left];
                left++;
            }
                if (current_sum <= s)
                {
                    good_segments += (right - left + 1);
                }
            
        }
    }

    cout << good_segments << "\n";

    return 0;
}