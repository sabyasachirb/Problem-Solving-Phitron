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
        int n;
        string s;
        cin >> n >> s;
        int cnt00 = 0, cnt11 = 0;
        for (int i = 0; i < n - 1; i++) 
        {
            if (s[i] == '0' && s[i+1] == '0') cnt00++;
            if (s[i] == '1' && s[i+1] == '1') cnt11++;
        }
        
        if (cnt11 >= cnt00) 
        {
            cout << 0 << endl;
            continue;
        }
        
        int max_gain = 0;
        for (int i = 0; i < n; i++) 
        {
            int gain = 0;
            
            if (s[i] == '0') {
                if (i > 0 && s[i-1] == '0') gain++;
                if (i < n-1 && s[i+1] == '0') gain++;
                if (i > 0 && s[i-1] == '1') gain++;
                if (i < n-1 && s[i+1] == '1') gain++;
            }
            max_gain = max(max_gain, gain);
        }
        int diff = cnt00 - cnt11;
        if(max_gain == 0) 
        {
            cout << diff << endl;
        } 
        else 
        {
            cout << (diff + max_gain - 1) / max_gain << endl;
        }
    }
    
    return 0;
}