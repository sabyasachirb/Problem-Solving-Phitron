#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node* inputTree(Node* &root) {
    int val;
    cin >> val;
    if (val == -1) return NULL;
    root = new Node(val);
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;
        if (leftVal != -1) {
            curr->left = new Node(leftVal);
            q.push(curr->left);
        }
        if (rightVal != -1) {
            curr->right = new Node(rightVal);
            q.push(curr->right);
        }
    }
    return root;
}

vector<int> countCousins(Node* root)
{
    vector<int> cousins;
    if (!root) return cousins;

    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* curr = q.front();
            q.pop();
            if (curr->left) q.push(curr->left);
            if (curr->right) q.push(curr->right);
        }
        cousins.push_back(size);
    }
    return cousins;
}

int main()
{
    Node* root = NULL;
    root = inputTree(root);
    countCousins(root);
    return 0;
}