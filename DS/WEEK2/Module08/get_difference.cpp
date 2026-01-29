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
void get_difference(Node* head)
{
    Node* tmp = head;
    int maximum_val= INT_MIN;
    int minimum_val = INT_MAX;
    for(Node* i = tmp; i != NULL; i = i->next)
    {
        maximum_val = max(maximum_val, i->val);
        minimum_val = min(minimum_val, i->val);
    }
    int diff = maximum_val - minimum_val;
    cout<<diff<<endl;
    
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
   get_difference(head);
    
}