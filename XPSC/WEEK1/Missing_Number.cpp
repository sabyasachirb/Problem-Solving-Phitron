#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int miss = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == miss+1)
        {
            miss++;
        }
        else if(arr[i] > miss+1)
        {
            break;
        }
    }
    cout << miss+1 << "\n";
    return 0;
}