#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int val) {
        this->data = val;
        this->next = NULL;
    }
};

class Queue
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    int cnt = 0;
    
    void push(int x)
    {
        Node* newNode = new Node(x);
        if (head == NULL) 
        {
            head = newNode;
            tail = newNode;
            cnt++;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        cnt++;
    }
    void pop()
    {
        if (head == NULL) return;
        cnt--;
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    void front()
    {
        if (head == NULL) return;
        
    }
};