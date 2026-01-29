#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string ans = "";
    stringstream ss(s);
    string temp;
    while(getline(ss, temp, '-'))
    {
        
        ans += temp[0];
        
    }
    cout << ans << "\n";
    return 0;
}