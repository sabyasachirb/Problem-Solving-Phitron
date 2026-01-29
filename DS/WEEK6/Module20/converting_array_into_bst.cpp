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


Node* convert(int arr[], int n, int start, int end) {
    if (start > end) return NULL;
    int mid = (start + end) / 2;
    Node* root = new Node(arr[mid]);
    root->left = convert(arr, n, start, mid - 1);
    root->right = convert(arr, n, mid + 1, end);
    return root;
}
int main() {
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }
    Node* root =convert(arr, x, 0, x-1);
    level_order(root);
    return 0;
}