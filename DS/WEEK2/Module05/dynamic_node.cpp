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

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(10);
    Node* b = new Node(23);
    Node* c = new Node(45);

    head->next = a;
    a->next = b;
    b->next = c;

    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;

    // Free allocated memory
    delete head;
    delete a;
    delete b;
    delete c;

    return 0;
}