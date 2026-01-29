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
void insert_at_pos(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;
    for (int i=1; i<idx-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
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


void print_linkedlist(Node* head)
{
    Node* tmp = head;
    if(tmp == NULL)
    {
        return;
    }
    cout << tmp->val <<" ";
    print_linkedlist(tmp->next);
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



int q;
cin>>q;
while(q--)
{
    int idx, value;
    cin >> idx >>value;
    int size = size_linkedlist (head);
    if(idx>size) cout<< "Invalid" <<endl;
    else if(idx == size)
    {
        insert_at_tail(head, tail, value);
        print_linkedlist(head);
        cout<<endl;
    } 
    else if(idx== 0) 
    {
        insert_at_head(head, tail, value); 
        print_linkedlist(head);
        cout<<endl;
    }
    else
    {
        insert_at_pos(head, idx, value);
        print_linkedlist(head);
        cout<<endl;
    }
   
}
}