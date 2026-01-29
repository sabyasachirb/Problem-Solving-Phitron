#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "sabyasachi";
    string s2 = "roy barman";
    // s += " " + s2; // Concatenating strings
    // s.append(" " + s2); // Appending strings
    // s.push_back('!'); // Adding a character at the end
    // s.pop_back(); // Removing the last character
    // s.assign(s2); // Assigning a new value to the string
    // s = s2; // Assigning a new value to the string
    //s.erase(5); // Erasing from index 5 to the end
    //s.erase(5, 2); // Erasing 2 characters starting from index 5
    //s.replace(5, 2, "Bangla"); // Replacing 2 characters starting from index 5 with "Bangla"
    s.insert(5, "Bangla "); // Inserting "Bangla " at index 5
    cout << s << endl;
}