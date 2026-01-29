// //doubly linked list

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int val;
//     Node* next; 
//     Node* prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

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
// void insert_at_tail(Node* &head, Node* &tail, int val)
// {
//     Node* newnode = new Node(val);
//     if(head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     newnode->prev = tail;
//     tail = newnode;
// }

// void insert_at_any_pos(Node* &head, int idx, int val)
// {
//     Node* newnode = new Node(val);
//     Node* tmp = head; 
//     for(int i = 1; i<idx; i++)
//     {
//         tmp = tmp->next;
//     }
//     newnode->next = tmp->next;
//     tmp->next->prev = newnode;
//     tmp->next = newnode;
//     newnode->prev = tmp;
// }
// void insert_at_head(Node* &head, Node* &tail, int val)
// {
//     Node* newnode = new Node(val);
//     if(head == NULL)
//     {
//         head = newnode;
//         tail = newnode;
//         return;
//     }
//     newnode->next = head;
//     head->prev = newnode;
//     head = newnode;
// }
// int size(Node* head)
// {
//     Node* tmp = head;
//     int cnt = 0;
//     while(tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     return cnt;
// }
// void delete_head(Node* &head, Node* &tail)
// {
//     Node* deleteNode = head;
//     head = head->next;
//     delete deleteNode;
//     if(head == NULL)
//     {
//         tail = NULL;
//         return;
//     }
//     head->prev = NULL;
// }
// void delete_tail(Node* &head, Node* &tail)
// {
//     Node* deleteNode = tail;
//     tail = tail->prev;
//     delete deleteNode;
//     if(tail == NULL)
//     {
//         head = NULL;
//         return;
//     }
//     tail->next = NULL;
// }
// void delete_at_any_pos(Node* head, int idx)
// {
//     Node* tmp = head;
//     for(int i = 1; i < idx; i++)
//     {
//         tmp = tmp->next;
//     }
//     Node* deleteNode = tmp->next;
//     tmp->next = tmp->next->next;
//     if(tmp->next != NULL) 
//     {
//         tmp->next->prev = tmp;
//     }
//     delete deleteNode;
// }

// int main()
// {
//     Node* head = NULL;
//     Node* tail = NULL;

//     int n; 
//     cin >> n;
//     while(n--)
//     {
//         int x, v;
//         cin >> x >> v;
//         int sz  = size(head);
//         if(x == 0)
//         {
//             insert_at_head(head, tail, v);
//             cout<<"L -> ";
//             print_forward(head);
//             cout<<"R -> ";
//             print_backward(tail);
//         }
//         else if(x == 1)
//         {
//             insert_at_tail(head, tail, v);
//             cout<<"L -> ";
//             print_forward(head);
//             cout<<"R -> ";
//             print_backward(tail);
//         }
//         else if(x == 2)
//         {
//             if(v == 0)
//             {
//                 delete_head(head, tail);
//                 cout<<"L -> ";
//                 print_forward(head);
//                 cout<<"R -> ";
//                 print_backward(tail);
//             }
//             else if(v == sz-1)
//             {
//                 delete_tail(head, tail);
//                 cout<<"L -> ";
//                 print_forward(head);
//                 cout<<"R -> ";
//                 print_backward(tail);
//             }
//             else if(v>0 && v<sz-1)
//             {
//                 delete_at_any_pos(head, v);
//                 cout<<"L -> ";
//                 print_forward(head);
//                 cout<<"R -> ";
//                 print_backward(tail);
//             }
//         }
//     }

   
// }


#include<bits/stdc++.h>
using namespace std;        

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while(q--)
    {
        int x,v;
        cin >> x >> v;
        if(x == 0)
        {
            l.push_front(v);
          
        }
        else if(x == 1)
        {
            l.push_back(v);
           
        }
        else if(x == 2)
        {
            if(v == 0)
            {
                l.pop_front();
            }
            else if(v == l.size() - 1)
            {
                l.pop_back();
            }
            else if(v > 0 && v < l.size() - 1)
            {
                auto it = l.begin();
                advance(it, v);
                l.erase(it);
            }
        }
        cout << "L -> ";
        for(int i : l) cout << i << " ";
        cout << endl;
        cout << "R -> ";
        for(auto it = l.rbegin(); it != l.rend(); ++it) cout << *it << " ";
        cout << endl;
    }
    }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     list<int> l;
//     int q;
//     cin >> q;
//     while(q--)
//     {
//         int x, v;
//         cin >> x >> v;
//         if(x == 0) // push_front
//         {
//             l.push_front(v);
//         }
//         else if(x == 1) // push_back
//         {
//             l.push_back(v);
//         }
//         else if(x == 2) // delete
//         {
//             if(l.empty()) continue; // prevent pop from empty list

//             if(v == 0) {
//                 l.pop_front();
//             }
//             else if(v == l.size() - 1) {
//                 l.pop_back();
//             }
//             else if(v > 0 && v < l.size()) {
//                 auto it = l.begin();
//                 advance(it, v);
//                 l.erase(it);
//             }
//         }

//         // print both directions
//         cout << "L -> ";
//         for(int i : l) cout << i << " ";
//         cout << "\nR -> ";
//         for(auto it = l.rbegin(); it != l.rend(); ++it) cout << *it << " ";
//         cout << "\n";
//     }
// }
