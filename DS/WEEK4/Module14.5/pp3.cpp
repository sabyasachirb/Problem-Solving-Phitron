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
    stack<int> temp;
    while(!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
}