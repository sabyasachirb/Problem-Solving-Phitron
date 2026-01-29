#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        set<int> p;
        int x;
        cin>>x;
        while(x--)
        {
            int val;
            cin>>val;
            p.insert(val);
        }

        for(auto it = p.begin(); it != p.end(); ++it)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    

}