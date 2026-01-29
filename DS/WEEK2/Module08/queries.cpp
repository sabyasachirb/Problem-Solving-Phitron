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
void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}
void delete_at_any_position(Node* &head, int idx)
{
    Node* tmp = head;
    for(int i = 1; i<idx; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_at_head(Node* &head)
{
    if(head == NULL)
    {
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void delete_at_tail(Node* &head, Node* &tail, int idx)
{
    if(head == NULL)
    {
        return;
    }
    Node* tmp = head;
    for(int i = 1; i<idx; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    tail = tmp;
}
void print_linkedlist(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    while(Q--)
    {
    int x, v;
    cin>>x>>v;
    int sz = size_of_linkedlist(head)-1;
    if(x==0)
    {
        insert_at_head(head, tail, v);
    }
    else if(x==1)
    {
        insert_at_tail(head, tail, v);
    }
    else if(x == 2)
    {
        if(v == 0)
        {
            delete_at_head(head);
        }
        else if(v == sz)
        {
            delete_at_tail(head, tail, v);
        }
        else if(v>0 && v<sz)
        {
            delete_at_any_position(head, v);
        }
    }
    print_linkedlist(head);
    cout<<endl;
    }
}