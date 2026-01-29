#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int minOperations(string s) {
    int n = s.length();
    if (n == 0) return 0;
    
    // Count transitions from '1' to '0'
    // This represents how many "waves" of 0s come after 1s
    int operations = 0;
    
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i + 1] == '0') {
            operations++;
        }
    }
    
    return operations;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        cout << minOperations(s) << endl;
    }
    
    return 0;
}