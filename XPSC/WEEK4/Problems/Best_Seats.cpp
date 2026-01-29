#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int min_value = INT_MAX;
        int i = 0;
        for(int j = 1; j < n; j++)
        {
            min_value = min(min_value, arr[j] + arr[i]);
            i++;
        }
        cout << min_value << "\n";
    }
    return 0;
}