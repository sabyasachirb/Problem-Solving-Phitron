#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<pair<int,int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[i] = {val, i};
    }
    sort(arr.begin(), arr.end());
    bool found = false;
    for(int i=0; i<n; i++)
    {
        long long sum = k - arr[i].first;
        int left = i + 1;
        int right = n - 1;
        while(left < right)
        {
            long long current_sum = arr[left].first + arr[right].first;
            if(current_sum == sum)
            {
                cout << arr[i].second + 1 << " " << arr[left].second + 1 << " " << arr[right].second + 1 << "\n";
                found = true;
                return 0;
            }
            else if(current_sum < sum)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    if(!found)
    {
        cout <<"IMPOSSIBLE" << "\n";
    }
    
    return 0;
}