#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i <n; i++) {
        cin >> a[i];
    }
    vector<int> size(n+1, 0);
    set<int> s;
    for (int i = a.size()-1; i>=0; i--)
    {
        s.insert(a[i]);
        size[i] = s.size();
    }
    while (m--) {
        int l;
        cin >> l;
        
        cout << size[l-1] << nl;
    }
    
    return 0;
}