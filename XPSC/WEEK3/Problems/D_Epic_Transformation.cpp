#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin>> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for(auto &it :mp)
        {
            pq.push(it.second);
        }
        while(!pq.empty())
        {
            if(pq.size() == 1)
            {
                break;
            }
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            x--;
            y--;
            if(x >= 1) pq.push(x);
            if(y >= 1) pq.push(y);
        }
        if(pq.empty())
        {
            cout << 0 << nl;
        }
        else
        {
            cout << pq.top() << nl;
        }
    }
    return 0;
}