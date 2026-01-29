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
        string s;
        cin >> s;
        map<char, int> freq;
        bool mission = true;
        for(char &c : s)
        {
            freq[c]++;
            if(freq[c] >= 3)
            {
                mission = false;
            }
        }
        if(mission)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}