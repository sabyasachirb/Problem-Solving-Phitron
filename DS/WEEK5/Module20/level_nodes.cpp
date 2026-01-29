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

void level_nodes(Node* root, int x) {
    vector<int> levelValues;
    int level = 0;
    if (root == NULL) return;
    queue<pair<Node*, int>> q;
    q.push({root, level});
    while (!q.empty()) {
        Node* p = q.front().first;
        level = q.front().second;
        q.pop();
        if (level == x) {
            levelValues.push_back(p->val);
        }
            if (p->left != NULL) q.push({p->left, level + 1});
            if (p->right != NULL) q.push({p->right, level + 1});
    }
    for (int val : levelValues) {
        cout << val << " ";
    }
    if(x>level)
        cout<<"Invalid";
    cout << endl;
}

int main() {
    Node* root = input_tree();
    int x;
    cin >> x;
    level_nodes(root, x);
    return 0;
}