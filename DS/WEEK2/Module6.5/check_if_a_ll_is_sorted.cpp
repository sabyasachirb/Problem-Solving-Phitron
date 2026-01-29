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


void if_sort_linkedlist(Node* head)
{
    bool found = false;
    for(Node* i = head; i->next != NULL; i = i->next)
    {
        for(Node* j = i; j->next != NULL; j = j->next)
        {
            if(i->val > j->val)
            {
                found = true;
            }
        }
    }
    if(found) cout << "NO" <<endl;
    else cout << "YES" << endl;
}
void print_linkedlist(Node* &head)
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
    if_sort_linkedlist(head);
    //print_linkedlist(head);
    
}