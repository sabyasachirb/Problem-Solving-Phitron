#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
    queue<int> q;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    if(s.size() != q.size()) {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        while(!s.empty() && !q.empty()) {
            if(s.top() != q.front()) {
                cout << "NO" << endl;
                return 0;
            }
            s.pop();
            q.pop();
        }
        cout << "YES" << endl;
    }
}