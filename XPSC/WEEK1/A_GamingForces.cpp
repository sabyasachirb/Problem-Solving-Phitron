#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ops = 0;
        for(int i=0; i<n; i++)
        {
            if(i+1<n && arr[i] == 1 && arr[i+1] == 1)
            {
                arr[i]--;
                arr[i+1]--;
                ops++;
            }
            else if(arr[i] >= 1)
            {
                arr[i] == 0;
                ops++;
            }
            else
            {
                continue;
            }
        }
        cout << ops << "\n";
    }
    return 0;
}