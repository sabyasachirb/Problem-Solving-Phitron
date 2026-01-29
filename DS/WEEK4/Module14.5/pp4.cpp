#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
   stack<int> temp;
    while(!q.empty()) {
        temp.push(q.front());
        q.pop();
    }
    queue<int> reversedQueue;
    while(!temp.empty()) {
        reversedQueue.push(temp.top());
        temp.pop();
    }
    while(!reversedQueue.empty()) {
        cout << reversedQueue.front() << " ";
        reversedQueue.pop();
    }
    cout << endl;
}

