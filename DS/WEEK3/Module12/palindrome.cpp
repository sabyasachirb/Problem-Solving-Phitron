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

// void print_forward(Node* head)
// {
//     Node* tmp = head;
//     while(tmp!= NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->next;
//     }
//     cout<<endl;
// }

// void print_backward(Node* tail)
// {
//     Node* tmp = tail;
//     while(tmp!= NULL)
//     {
//         cout<<tmp->val<<" ";
//         tmp = tmp->prev;
//     }
//     cout<<endl;
// }
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
void if_palindrome(Node* head, Node* tail)
{
    Node* left = head;
    Node* right = tail;
    while(left != NULL && right != NULL && left != right && left->prev != right)
    {
        if(left->val != right->val)
        {
            cout << "NO" << endl;
            return;
        }
        left = left->next;
        right = right->prev;
    }
    cout << "YES" << endl;
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

    // print_forward(head);
    // print_backward(tail);
    if_palindrome(head, tail);
}