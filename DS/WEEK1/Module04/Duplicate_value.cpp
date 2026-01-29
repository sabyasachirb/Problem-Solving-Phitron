#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long int> arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); 
    vector<long long int> prefix_sum(n+1);
    long long int sum = 0;
    bool found = false;
    prefix_sum[1] = arr[1];

    for(int i = 2; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    for (int i = 1; i <= n; i++) 
    {
        if(prefix_sum[i+1] - arr[i] == arr[i]) 
        {
            found = true;
            break;
        }
    }

    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}