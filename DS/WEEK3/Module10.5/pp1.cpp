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
int size_of_LL(Node* head)
{
    Node* tmp = head;
    int i = 0;
    while(tmp!=NULL)
    {
        i++;
        tmp = tmp->next;
    }
    return i;
}
void if_same(Node* head, Node* head1, int sz1, int sz2)
{
    Node* tmp = head;
    Node* tmp1 = head1;
    bool same = true;
    if(sz1!=sz2) same=false;
    while(tmp!= NULL && tmp1!=NULL)
    {
        if(tmp->val != tmp1->val)
        {
            same = false;
            break;
        }
        tmp = tmp->next;
        tmp1= tmp1->next;
    }
    if(same) cout << "SAME" << endl;
    else cout << "NOT SAME" << endl;

}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int n; 
    while(true)
    {
        cin>>n;
        if(n == -1)
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }
    Node* head1 = NULL;
    Node* tail1 = NULL;

    int v; 
    while(true)
    {
        cin>>v;
        if(v == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, v);
    }
    int sz1 = size_of_LL(head);
    int sz2 = size_of_LL(head1);
    if_same(head, head1,sz1,sz2);
}