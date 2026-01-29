#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<char> a;
        for(int i=0; i<n; i++)
        {
            char x;
            cin >> x;
            a.push_back(x);
        }
        bool found = false;
        for(int i=0; i<n-1; i++)
        {
            if(a[i] != a[i+1])
            {
                found = true;
                break;
            }   
        }
        if(found)
            cout << "Zlatan\n";
        else
            cout << "Ramos\n";

    }
    return 0;
}