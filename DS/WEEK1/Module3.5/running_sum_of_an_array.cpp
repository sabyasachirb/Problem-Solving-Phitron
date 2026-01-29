#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> running_sum(n);
    running_sum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        running_sum[i] = running_sum[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << running_sum[i] << " ";
    }
}