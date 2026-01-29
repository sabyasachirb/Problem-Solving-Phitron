#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        this->val = value;
        this->left = this->right = NULL;
    }
};
Node* input_tree() {
    int val;
    cin >> val;
    Node* root; 
    if (val == -1) return NULL;
    else root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node* leftChild = NULL;
        Node* rightChild = NULL;
        if (l != -1) {
            leftChild = new Node(l);
            p->left = leftChild;
            q.push(leftChild);
        }
        if (r != -1) {
            rightChild = new Node(r);
            p->right = rightChild;
            q.push(rightChild);
        }
    }
    return root;
}

void print_outer_tree(Node* root) {
    vector<int> outer_nodes;
    stack<int> left_nodes;

    if (root == NULL) return;
    Node* temp = root->left;
    while(temp != NULL)
    {
        if(temp->left)
        {
            left_nodes.push(temp->val);
            temp = temp->left;
            
        }
        else if(temp->right)
        {
            left_nodes.push(temp->val);
            temp = temp->right;
        }
        else
        {
            left_nodes.push(temp->val);
            break;
        }
    }
    while(!left_nodes.empty())
    {
        outer_nodes.push_back(left_nodes.top());
        left_nodes.pop();
    }
    if(root != NULL) outer_nodes.push_back(root->val);
    Node* rightt = root->right;
    while(rightt != NULL)
    {
        if(rightt->right)
        {
            outer_nodes.push_back(rightt->val);
            rightt = rightt->right;
            
        }
        else if(rightt->left)
        {
            outer_nodes.push_back(rightt->val);
            rightt = rightt->left;
            
        }
        else
        {
            outer_nodes.push_back(rightt->val);
            break;
        }
    }
    for(int i : outer_nodes)
    {
        cout << i << " ";
    }
}

int main() {
    Node* root = input_tree();
    print_outer_tree(root);
    return 0;
}