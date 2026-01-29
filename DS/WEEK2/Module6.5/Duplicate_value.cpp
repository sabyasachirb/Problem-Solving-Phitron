#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
     tail->next = newnode;
    tail = newnode;
}

int size_linkedlist(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void duplicate_value(Node* &head)
{
    bool found = false;
    for(Node* i = head; i->next != NULL; i= i->next)
    {
        for(Node* j = i->next; j!=NULL; j = j->next)
        {
            if(i->val == j->val)
            {
                found = true;
            }
        }
    }
    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(true)
    {
        cin>>val;
        if(val== -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int size = size_linkedlist(head);
    duplicate_value(head);
}