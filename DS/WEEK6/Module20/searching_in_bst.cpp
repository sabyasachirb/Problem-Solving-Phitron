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
    if (val == -1) root = NULL;
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

bool search(Node* root, int x) {
    if (root == NULL) return false;
    if (root->val == x) return true;  
    if (x < root->val)
        // Search in the left subtree
        return search(root->left, x);
    else
        // Search in the right subtree
        return search(root->right, x);
}


int main() {
    Node* root = input_tree();
    int x;
    cin >> x;
    if (search(root, x)) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}