#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

void insert_at_head(Node* &head, int val)
{
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void printing_linked_list(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_head(head, 5);
    insert_at_head(head, 6);
    printing_linked_list(head);
}