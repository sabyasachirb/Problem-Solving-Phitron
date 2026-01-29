#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    map<long long int, pair<int, int>> mp;
    for(int i=0; i<n; i++)
    {
        long long int value = arr[i];
        if(!mp.count(value))
        {
            mp[value] = {i+1, i+1};
        }
        else
        {
            mp[value].second = i+1;
        }
    }
    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
    }
    
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<long long> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     // Map to store first and last index of each value
//     map<long long, pair<int, int>> value_indices;
    
//     // Find first and last occurrence of each value
//     for (int i = 0; i < n; i++) {
//         long long value = arr[i];
        
//         if (value_indices.count(value) == 0) {
//             // First occurrence - store both first and last as current index
//             value_indices[value] = {i, i};
//         } else {
//             // Update last occurrence
//             value_indices[value].second = i;
//         }
//     }
    
//     // Map automatically sorts keys, so we can iterate directly
//     for (auto& entry : value_indices) {
//         long long value = entry.first;
//         int first_index = entry.second.first;
//         int last_index = entry.second.second;
        
//         cout << value << " " << first_index << " " << last_index << endl;
//     }
    
//     return 0;
// }