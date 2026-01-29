#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long max_sum = 0;
        for(int i = 0; i < n; i++)
        {
            max_sum += abs(arr[i]);
        }

        int operations = 0;
        bool in_negative_segment = false;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] < 0)
            {
                if(!in_negative_segment)
                {
                    operations++;
                    in_negative_segment = true;
                }
            }
            else if(arr[i] > 0)
            {
                in_negative_segment = false;
            }
        }

        cout << max_sum << " " << operations << "\n";
    }

    return 0;
}