// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string line;
//     while (getline(cin, line)) {
//         string processed;
//         for (char c : line) {
//             if (c != ' ') {
//                 processed += c;
//             }
//         }
//         sort(processed.begin(), processed.end());
//         cout << processed << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string line;
    
    while (getline(cin, line)) {
        string letters = "";
        
        // Get all lowercase letters
        for (int i = 0; i < line.length(); i++) {
            if (line[i] >= 'a' && line[i] <= 'z') {
                letters += line[i];
            }
        }
        
        // Sort them
        sort(letters.begin(), letters.end());
        
        // Print result
        cout << letters << endl;
    }
    
    return 0;
}