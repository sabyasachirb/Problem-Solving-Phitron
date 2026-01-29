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
        vector<int> sticks(n);
        for(int i = 0; i < n; i++)
            cin >> sticks[i];
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(sticks[i]>1)
            {
                sum += sticks[i]-1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}