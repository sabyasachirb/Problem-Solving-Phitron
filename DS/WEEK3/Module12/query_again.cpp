//doubly linked list

#include<bits/stdc++.h>
using namespace std;

class Node{
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

void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp!= NULL)
    {
        
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void print_backward(Node* tail)
{
    Node* tmp = tail;
    while(tmp!= NULL)
    {
        
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
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
    newnode->prev = tail;
    tail = newnode;
}

void insert_at_any_pos(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head; 
    for(int i = 1; i<idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
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
    head->prev = newnode;
    head = newnode;
}
int size(Node* head)
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

    int n; 
    cin >> n;
    while(n--)
    {
        int x, v;
        cin >> x >> v;
        int sz  = size(head);
        if(x == 0)
        {
            insert_at_head(head, tail, v);
            cout<<"L -> ";
            print_forward(head);
            cout<<"R -> ";
            print_backward(tail);
        }
        else if(x == sz)
        {
            insert_at_tail(head, tail, v);
            cout<<"L -> ";
            print_forward(head);
            cout<<"R -> ";
            print_backward(tail);
        }
        else if(x > sz || x < 0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_any_pos(head, x, v);
            cout<<"L -> ";
            print_forward(head);
            cout<<"R -> ";
            print_backward(tail);
        }
    }

   
}