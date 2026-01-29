#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int val) {
        this->data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
public:
    Node* head = NULL;
    Node* tail = NULL; 
    int cnt = 0;

    void push(int x) {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            cnt++;
            return;
        }
        newNode->next = head;
        head = newNode;
        cnt++;
    }

    void pop() {
        if (head == NULL) return;
        cnt--;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front() {
        if (head == NULL) return -1;
        return head->data;
    }
    bool empty() {
        return head == NULL;
    }
    int size() {
        return cnt;
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
    myStack s1;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s1.push(x);
    }

    if(s.size() != s1.size()) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        while(!s.empty() && !s1.empty()) {
            if(s.front() != s1.front()) {
                cout << "NO" << endl;
                return 0;
            }
            s.pop();
            s1.pop();
        }
        cout << "YES" << endl;
    }
}