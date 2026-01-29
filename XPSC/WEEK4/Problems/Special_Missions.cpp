
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        int n;
        int C;
        cin >> n >> C;
        vector<int> A(n);
        for(int i = 0; i < n; ++i) 
            cin >> A[i];
        string S;
        cin >> S;
        
        int sumforzero = 0; 
        int sumforone = 0; 
        for(int i = 0; i < n; ++i) 
        {
            if (S[i] == '0') sumforzero += A[i];
            else sumforone += A[i];
        }
        
        int ans = sumforzero;
        if(sumforzero>= C) 
            ans = max(ans, sumforzero + sumforone - C);
        cout << ans << '\n';
    }
    return 0;
}
