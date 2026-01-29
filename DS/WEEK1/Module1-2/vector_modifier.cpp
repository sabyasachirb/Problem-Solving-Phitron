#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v= {1, 2, 3, 4, 5};
    vector<int>v2;
    v2 = v; 
    
    v2.push_back(6);
    v2.pop_back();

    // v2.insert(v2.begin() + 3, 10);
    v2.insert(v2.begin() + 3, v.begin(), v.end());
    v2.erase(v2.begin() + 4);
    //v2.erase(v2.begin() + 3, v2.begin() + 8);
    //replace(v2.begin() + 2, v2.end() , 5, 100);
    replace(v2.begin() + 2, v2.begin() + 8, 5, 100);
    // for(int x : v2)
    // {
    //     cout << x << " ";
    // }

    // auto it = find(v2.begin(), v2.end(), 9);
    // if(it != v2.end())
    // {
    //     cout << "Element found: " << *it << endl;
    // }
    // else
    // {
    //     cout << "Element not found" << endl;
    // }

    for(auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    cout<< v2.front() << " " << v2.back() << endl;

    
    return 0;
}