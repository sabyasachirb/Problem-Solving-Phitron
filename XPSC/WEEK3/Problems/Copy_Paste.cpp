#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << nl;
    }
    
    return 0;
}