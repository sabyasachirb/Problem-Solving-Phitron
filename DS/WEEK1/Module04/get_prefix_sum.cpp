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
    
    vector<long long int> prefix_sum(n+1);
    prefix_sum[1] = arr[1];

    for(int i = 2; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }

    for (int i = n; i > 0; i--) 
    {
        cout <<prefix_sum[i] << " ";
    }


    return 0;
}