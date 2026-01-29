#include<bits/stdc++.h>
using namespace std;

class myStack {
    public:
    list<int> l;

    void push(int x) {
        l.push_back(x);
    }

    void pop() {
        if (!l.empty()) {
            l.pop_back();
        }
    }

    int top() {
        if (!l.empty()) {
            return l.back();
        }
        return -1;  // Stack is empty
    }

    bool empty() {
        return l.empty();
    }

    int size() {
        return l.size();
    }
};

int main()
{
    myStack s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    
}