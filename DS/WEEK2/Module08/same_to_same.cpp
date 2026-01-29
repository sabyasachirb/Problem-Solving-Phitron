#include<bits/stdc++.h>
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

void same_to_same(Node* &head, Node* &head1, int sz1, int sz2)
{
    bool found = true;
    Node* tmp1 = head;
    Node* tmp2 = head1;
    if(sz1 != sz2)
    {
        found = false;
    }
    else
    {
        while(tmp1!= NULL && tmp2!=NULL)
    {
        if(tmp1->val != tmp2->val)
        {
            found = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    
    }
    
    if (found) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int size_of_linkedlist(Node* head)
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
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val1;
    while(true)
    {
        cin>>val1;
        if(val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }
    int sz1 = size_of_linkedlist(head);
    int sz2 = size_of_linkedlist(head1);
    same_to_same(head, head1, sz1,sz2);
    
    
}