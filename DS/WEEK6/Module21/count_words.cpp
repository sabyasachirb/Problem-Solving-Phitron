#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    getline(cin, text);
    stringstream ss(text);
    string word;
    map<string, int> mp;


    while(ss >> word)
    {
        mp[word]++;
    }

    // Display the word counts
    for(auto it : mp)
    {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}