#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int value) {
        this->val = value;
        this->left = NULL;
        this->right = NULL;
    }
};
map<int,int> leaf_count;
Node* inputTree(Node* &root)
{
    int val;
    cin>>val;
    if(val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();
        int l,r;
        cin >> l >> r;
        curr->left = (l == -1) ? NULL : new Node(l);
        curr->right = (r == -1) ? NULL : new Node(r);
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
    return root;
}
int count_leaf(Node* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL)
    {
        leaf_count[root->val]++;
        return 1;
    }
    int left = count_leaf(root->left);
    int right = count_leaf(root->right);
    return left + right;
}

int main()
{
    Node* root  = inputTree(root);
    count_leaf(root);

    int max_value = INT_MIN;
    for(auto it : leaf_count) {
        max_value = max(max_value, it.second);
    }
    vector<int> keys_with_max;
    for(auto it : leaf_count) {
        if(it.second == max_value) {
            keys_with_max.push_back(it.first);
        }
    }
    if(keys_with_max.size()>1)
    {
        sort(keys_with_max.begin(), keys_with_max.end());
        cout << keys_with_max[0] << endl;
    }
    else if(keys_with_max.size() == 1)
    {
        cout << keys_with_max[0] << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}