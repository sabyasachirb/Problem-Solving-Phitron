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
        int max_freq = 0;
        for(int i=1; i<=n; i++)
        {
            int val;
            cin >> val;
            max_freq = max(max_freq, val);
        }
        cout <<  max_freq << "\n";

    }
    return 0;
}