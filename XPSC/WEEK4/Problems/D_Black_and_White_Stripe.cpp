#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i=0, j=0;
        int result = INT_MAX;
        int ans = 0;
        while (j < n) {
            if (s[j] == 'W')
            {
                ans++;
            }
            if (j - i + 1 < k)
            {
                j++;
            }
            else if(j - i + 1 == k)
            {
                result = min(result, ans);
                if (s[i] == 'W')
                {
                    ans--;
                }
                i++;
                j++;
            }
               
        }
        cout << result << nl;
    }
    
    return 0;
}