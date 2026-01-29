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
        vector<char> s(n);
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int erasers_used = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                erasers_used++;
                i = i+ k-1;
            }
        }

        
        cout << erasers_used << "\n";
    }
    return 0;
}