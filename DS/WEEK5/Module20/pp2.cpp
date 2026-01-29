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

vector<int> values_leaf_nodes(Node* root) {
    vector<int> leafValues;
    if (root == NULL) return leafValues;
    if (root->left == NULL && root->right == NULL) {
        leafValues.push_back(root->val);
        return leafValues;
    }
    if(root->right != NULL) {
        vector<int> rightLeaves = values_leaf_nodes(root->right);
        leafValues.insert(leafValues.end(), rightLeaves.begin(), rightLeaves.end());
    }
    if(root->left != NULL) {
        vector<int> leftLeaves = values_leaf_nodes(root->left);
        leafValues.insert(leafValues.end(), leftLeaves.begin(), leftLeaves.end());
    }
    return leafValues;
}
int main() {
    Node* root = input_tree();
    vector<int> leafValues = values_leaf_nodes(root);

    sort(leafValues.begin(), leafValues.end(), greater<int>());
    for (int val : leafValues) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}