#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        s.insert(val);
    }

    // Iterating over the set
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Finding an element
    if(s.find(2) != s.end())
    {
        cout << "2 is present in the set." << endl;
    }
    else
    {
        cout << "2 is not present in the set." << endl;
    }

    return 0;
}