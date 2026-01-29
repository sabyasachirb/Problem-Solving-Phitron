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
int max_depth(Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    int leftHeight = max_depth(root->left);
    int rightHeight = max_depth(root->right);
    return 1 + max(leftHeight, rightHeight);
}


int count_nodes(Node* root) {
    if (root == NULL) return 0;
    return 1 + count_nodes(root->left) + count_nodes(root->right);
}

int main() {
    Node* root = input_tree();
    int depth = max_depth(root); 
    int total_nodes = count_nodes(root);  
    int cal = pow(2, depth) -1;

    if(cal == total_nodes) {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}