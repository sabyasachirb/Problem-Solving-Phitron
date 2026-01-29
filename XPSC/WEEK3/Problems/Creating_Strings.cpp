#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    vector<string> v;
    v.push_back(s);
    while (next_permutation(s.begin(), s.end()))
    {
        v.push_back(s);
    }
    cout << v.size() << nl;
    for (auto &it : v)
    {
        cout << it << nl;
    }
    return 0;
}