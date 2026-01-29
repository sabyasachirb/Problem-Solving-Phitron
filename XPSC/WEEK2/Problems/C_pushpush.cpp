#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define nl "\n";

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin>>n;
    deque<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(i%2 == 0 ) v.push_back(x);
        else v.push_front(x);
    }
    if(n%2 != 0) 
    {
        reverse(v.begin(), v.end());
    }
    for(auto a: v)
    {
        cout<< a <<" ";
    }
    
    return 0;
}