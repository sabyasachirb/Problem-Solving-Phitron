#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

Node* input_tree()
{
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

int count_nodes(Node* root)
{
    if (root == NULL) return 0;
    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    return l + r + 1;
}

int main()
{
    Node* root = input_tree();
    int total_nodes = count_nodes(root);
    cout << "Total nodes in the tree: " << total_nodes << endl;
    return 0;
}
