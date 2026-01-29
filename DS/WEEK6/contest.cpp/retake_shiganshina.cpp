#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x = 0;
    for(int i = 0; i < v.size(); i++) {
        for(int j = i + 1; j < v.size(); j++) {
            if(v[i] + v[j] == p) {
                x++;
            }
        }
    }
    cout << x << endl;
}