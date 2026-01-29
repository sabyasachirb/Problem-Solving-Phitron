#include<bits/stdc++.h>
using namespace std;

class myStack {
    public:
    vector<int> v;

    void push(int x) {
        v.push_back(x);
    }

    void pop() {
        if (!v.empty()) {
            v.pop_back();
        }
    }

    int top() {
        if (!v.empty()) {
            return v.back();
        }
        return -1;  // Stack is empty
    }

    bool empty() {
        return v.empty();
    }

    int size() {
        return v.size();
    }
};

int main()
{
    myStack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl; // Should print 30
    cout << "Stack size: " << s.size() << endl; // Should print
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Should print 20
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Should print No
    s.pop();
    
}