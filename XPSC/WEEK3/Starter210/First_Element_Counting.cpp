#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0; i<n; i++) 
        {
            cin>>a[i];
        }
        vector<pair<long long, int>> sorted_a(n);
        for(int i = 0; i<n; i++) 
        {
            sorted_a[i] = {a[i], i};
        }
        sort(sorted_a.begin(), sorted_a.end());
        
        vector<long long> result(n, 0);
        
        for(int i=0; i<n; i++) {
            long long val = sorted_a[i].first;
            int orig_idx = sorted_a[i].second;
            if(i == 0 || i == n - 1) 
            {
                result[orig_idx] = -1;
                continue;
            }
            
            long long left_val = sorted_a[i-1].first;
            long long right_val = sorted_a[i+1].first;
            long long left_mid = left_val + val;
            long long left_bound = left_mid/2 + 1;
            long long right_mid = val + right_val;
            long long right_bound = right_mid/2;
            if(left_bound <= right_bound) 
            {
                result[orig_idx] = right_bound - left_bound + 1;
            } 
            else 
            {
                result[orig_idx] = 0;
            }
        }
        for(int i=0; i<n; i++) 
        {
            cout<< result[i];
            if(i<n - 1) 
                cout << " ";
        }
        cout<< "\n";
    }
    
    return 0;
}