#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    vector<int> merged;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        merged.push_back(x);
    }
    for (int j = 0; j < m; j++) {
        int y;
        cin >> y;
        merged.push_back(y);
    }
    
    sort(merged.begin(), merged.end());
    
    for(int k = 0; k < merged.size(); k++) {
        cout << merged[k] << " ";
    }
    
    return 0;
}