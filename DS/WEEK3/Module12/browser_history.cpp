#include<bits/stdc++.h>
using namespace std;    

class Node{
    public:
    string val;
    Node* next; 
    Node* prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insert_at_tail(Node* &head, Node* &tail, string val)
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


// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     string n; 
//     while(true)
//     {
//         cin>>n;
//         if(n == "end")
//         {
//             break;
//         }
//         insert_at_tail(head, tail, n);
//     }
// Node* current = head;
//     int t;
//     cin >> t;
//     while (t--) {
//         string command;
//         cin >> command;
        
//         if (command == "visit") {
//             string url;
//             cin >> url;
//             while (current->next != NULL && current->val != url) {
//                 current = current->next;
//                 }
//             if (current->val != url) {
//                 while (current->prev != NULL && current->val != url) {
//                     current = current->prev;
//                 }
//             }
//             if(current != NULL) 
//             {
//                 cout<<current->val<<endl;
//             }
//             else cout<<"Not Available"<<endl;
//         }
//         else if(command == "next")
//         {
//             if(current == NULL) 
//             {
//                 cout<<"Not Available"<<endl;
//             }
//             else 
//             {
//                 current = current->next;

//             if(current != NULL)
//             {
//                 cout<<current->val<<endl;
//             }
//             else
//             {
//                 cout<<"Not Available"<<endl;
//             }
//             }
//         }
//         else if(command == "prev")
//         {
//             if(current == NULL)
//             {
//                 cout<<"Not Available"<<endl;
//             } 
//             else 
//             {
//                 current = current->prev;

//             if(current != NULL)
//             {
//                 cout<<current->val<<endl;
//             }
//             else
//             {
//                 cout<<"Not Available"<<endl;
//             }
//             }
//         }
//     }
// }

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    string n; 
    while (true)
    {
        cin >> n;
        if (n == "end")
        {
            break;
        }
        insert_at_tail(head, tail, n);
    }

    Node* current = head;
    int t;
    cin >> t;
    while (t--) {
        string command;
        cin >> command;

        if (command == "visit") {
            string url;
            cin >> url;

            Node* temp = head;
            bool found = false;

            while (temp != NULL) {
                if (temp->val == url) {
                    found = true;
                    break;
                }
                temp = temp->next;
            }

            if (found) {
                current = temp;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "next") {
            if (current != NULL && current->next != NULL) {
                current = current->next;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
        else if (command == "prev") {
            if (current != NULL && current->prev != NULL) {
                current = current->prev;
                cout << current->val << endl;
            } else {
                cout << "Not Available" << endl;
            }
        }
    }
}
