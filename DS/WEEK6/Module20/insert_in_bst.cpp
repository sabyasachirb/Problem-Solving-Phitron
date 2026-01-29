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

void insert(Node*& root, int value) {
    if (root == NULL) {
        root = new Node(value);
        return;
    }
    if (value < root->val) {
        if (root->left == NULL) {
            root->left = new Node(value);
        }
        else {
            insert(root->left, value);
        }
    } 
    else {
        if (root->right == NULL) {
            root->right = new Node(value);
        }
        else {
            insert(root->right, value);
        }
    }
}
void level_order(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->val << " ";
        if (current->left != NULL) q.push(current->left);
        if (current->right != NULL) q.push(current->right);
    }
}
int main() {
    Node* root = input_tree();
    int x;
    cin >> x;
    insert(root, x);
    level_order(root);
    return 0;
}