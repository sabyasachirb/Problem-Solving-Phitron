#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    long long l, r;
    cin >> l >> r;
    
    cout << "YES\n";
    for(long long i=l; i<r; i+=2)
    {
        cout<< i <<" "<<i + 1<<"\n";
    }

    return 0;
}