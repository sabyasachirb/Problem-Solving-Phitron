// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     for(auto it = s.begin(); it < s.end(); it++)
//     {
//         cout <<*it <<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cout << "Enter a string with spaces: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, s); // Read the entire line including spaces
    cout << "You entered: " << s << endl;

    // Output each character in the string
    for (auto it = s.begin(); it < s.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}