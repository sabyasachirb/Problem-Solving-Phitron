#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        int sum = 0;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            if(sum + arr[i] <= k)
            {
                sum += arr[i];
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << '\n';
    }

    return 0;
}

