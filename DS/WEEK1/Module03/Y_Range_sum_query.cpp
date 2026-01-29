// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n >> q;
//     vector<int> arr(n + 1);
//     for (int i = 1; i <= n; i++) {
//         cin >> arr[i];
//     }
//     while (q--) {
//         int l, r;
//         cin >> l >> r;
//         int sum = 0;
//         for (int i = l; i <= r; i++) {
//             sum += arr[i];
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    vector<long long> prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
    }
    return 0;
}