#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<pair<string, string>> v;
    while (t--)
    {
        string oldHandle, newHandle;
        cin >> oldHandle >> newHandle;
        bool found = false;
        for(auto &pr : v)
        {
            if (pr.second == oldHandle)
            {
                pr.second = newHandle;
                found = true;
                break;
            }
        }
        if(!found)
            v.push_back({oldHandle, newHandle});
    }
    cout<<v.size()<<"\n";
    for(auto pr : v)
        cout << pr.first << " " << pr.second << "\n";
    return 0;
}