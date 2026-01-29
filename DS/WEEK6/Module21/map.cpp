#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    m["Alice"] = 85;
    m["Bob"] = 90;
    m["Charlie"] = 80;

    // Iterating over the map
    // for(auto it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if(m.count("Alice"))
    {
        cout << "Alice is present with marks: " << m["Alice"] << endl;
    }
    else
    {
        cout << "Alice is not present in the map." << endl;
    }

    return 0;
}