#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left = 0;
    long long count = 0;
    int current_sum = 0;
    for (int right = 0; right < n; right++)
    {
        current_sum += arr[right];
        while (current_sum > x && left <= right)
        {
            current_sum -= arr[left];
            left++;
        }
        if (current_sum == x)
        {
            count++;
        }
    }
    cout << count << "\n";

    
    return 0;
}