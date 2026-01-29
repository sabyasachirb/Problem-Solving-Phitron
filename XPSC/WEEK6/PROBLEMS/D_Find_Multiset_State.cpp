#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<int> ms;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ms.insert(x);
        }
        for(int i = 0; i < k; i++)
        {
            int low = *ms.begin();
            ms.erase(ms.begin());
            int high = *ms.rbegin();
            ms.erase(prev(ms.end()));
            ms.insert(high + low);
        }
        for(auto val : ms)
        {
            cout << val << " ";
        }
        cout << "\n";
    }
    return 0;
}