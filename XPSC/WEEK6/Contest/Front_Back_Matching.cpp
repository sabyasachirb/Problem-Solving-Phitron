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
        bool flag = false;
        map<char, int> count_map;
        for(char c : s)
        {
            count_map[c]++;
            if(count_map[c] > 1)
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

    }
    return 0;
}