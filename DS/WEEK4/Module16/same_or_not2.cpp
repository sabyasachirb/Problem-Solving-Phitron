#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class mystack {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int cnt = 0;

    void push(int x)
    {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            cnt++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        cnt++;
    }

    void pop()
    {
        if (head == NULL) return;
        if (head == tail) {
            delete head;
            head = NULL;
            tail = NULL;
            cnt--;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        delete temp;
        if(tail == NULL) {
            head = NULL;
        }
        tail->next = NULL;
        cnt--;
    }

    int top()
    {
        if (head == NULL) return 0;
        return tail->val;
    }
    bool empty()
    {
        return head == NULL;
    }
    int size()
    {
        return cnt;
    }

};

class myqueue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int cnt = 0;

    void push(int x)
    {
        Node* newNode = new Node(x);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            cnt++;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        cnt++;
    }

    void pop()
    {
        if (head == NULL) return;
        else if (head == tail) {
            delete head;
            head = NULL;
            tail = NULL;
            cnt--;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        head->prev = NULL;
        cnt--;
    }

    int front()
    {
        if (head == NULL) return 0;
        return head->val;
    }
    bool empty()
    {
        return head == NULL;
    }
    int size()
    {
        return cnt;
    }

};

int main()
{
    mystack s;
    myqueue q;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    if (s.size() != q.size()) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        while (!s.empty() && !q.empty()) {
            if (s.top() != q.front()) {
                cout << "NO" << endl;
                return 0;
            }
            else {
                s.pop();
                q.pop();
            }
        }
        cout << "YES" << endl;
    }
}