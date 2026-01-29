#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    long long int ops = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            ops += arr[i-1]-arr[i];
            arr[i] += arr[i-1]-arr[i];
        }
    }
    cout << ops << "\n";
    return 0;
}