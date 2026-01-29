#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    while(n--)
    {
        stack<char> s;
        string str;
        cin >> str; 
        for(char c : str) {
            if(s.empty()) s.push(c);
            else if(c == '0' && s.top() == '1') s.pop();
            else if(c == '1' && s.top() == '0') s.pop();
            else s.push(c);
        }
        if(s.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
        

}