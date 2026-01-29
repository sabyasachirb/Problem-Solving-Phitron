#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        for(int i=0; i<k; i++)
        {
                a[i] = 0;
                x += 100;
        }
        int count = 1;
        for(int i=0; i<n; i++)
        {
            if(a[i]>x)
                count++;
        }
        cout << count << "\n";
        
    }
    return 0;
}

