#include<bits/stdc++.h>
using namespace std;

// class Node
// {
// public:
//     string data;
//     Node* next;
//     Node(string val) {
//         this->data = val;
//         this->next = NULL;
//     }
// };

// class myqueue
// {
// public:
//     Node* head = NULL;
//     Node* tail = NULL;
//     int cnt = 0;

//     void push(string x)
//     {
//         Node* newNode = new Node(x);
//         if (head == NULL) 
//         {
//             head = newNode;
//             tail = newNode;
//             cnt++;
//             return;
//         }
//         tail->next = newNode;
//         tail = newNode;
//         cnt++;
//     }
//     void pop()
//     {
//         if (head == NULL) return;
//         cnt--;
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }
//     string front()
//     {
//         if (head == NULL) return "";
//         return head->data;
//     }
//     string back()
//     {
//         if (tail == NULL) return "";
//         return tail->data;
//     }
//     int size()
//     {
//         return cnt;
//     }
//     bool empty()
//     {
//         if(head == NULL) return true;
//         return false;
//     }
// };

int main()
{
    queue<string> q;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s == "ARRIVE")
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if(s == "FIRST")
        {
            if(!q.empty()) {
                cout << q.front() << endl;
            }
        }
        else if(s == "LAST")
        {
            if(!q.empty()) {
                cout << q.back() << endl;
            }
        }
        else if(s == "COUNT")
        {
            cout << q.size() << endl;
        }
        else if(s == "SERVE")
        {
            if(!q.empty()) {
                // cout << q.front() << endl;
                q.pop();
            }
        }
        else if(s == "SHOW")
        {
            queue<string> temp = q;
            while(!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
        }
    }
    return 0;
}