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

void insert_at_tail(Node* &head, int val)
{
    Node* new_node = new Node(val);
    
    if(head == NULL)
    {
        head = new_node;
        return;
    }
    Node* temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void printing_linkedlist(Node* head)
{
    Node* temp = head;
    while(temp!= NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}


int main()
{
    Node* head = NULL;
    // Node* a = new Node(20);
    // Node* b = new Node(30);

    // head->next = a;
    // a->next = b;

    insert_at_tail(head, 33);
    printing_linkedlist(head);
}