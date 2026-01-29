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
void search_indx(Node* head, int x, int sz)
{
    Node* tmp = head;
    bool found = false;
    int index;
    for(int i=0; i<sz; i++)
    {
        if(tmp->val == x) 
        {
            found = true;
            index = i;
            break;
        }
        tmp = tmp->next;
    }
    
    if(found) cout<<index<<endl;
    else cout<< "-1"<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
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
    int x;
    cin >> x;
    int sz = size_of_linkedlist(head);
    search_indx(head, x, sz);
    }
}