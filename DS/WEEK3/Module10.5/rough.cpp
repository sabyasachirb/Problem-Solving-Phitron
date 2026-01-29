#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {7,9,6,6,7,8,3,0,9,5};
    int idx = 5;
    int sz = v.size();
    swap(v[idx-1], v[sz-idx]);
    for (int i = 0; i < sz; i++) {
        cout << v[i] << " ";
    }
    // for(int i : v) {
    //     cout << i << " ";
    // }
    return 0;
}