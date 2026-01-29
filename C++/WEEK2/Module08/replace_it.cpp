#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s,t;
        cin >> s >> t;
        for(int i = 0; i < s.size(); i++)
        {
            if((s[i]== t[0]) && (s[i + t.size()-1] == t[t.size()-1]))
            {
                bool match = true;
                for(int j = 0; j < t.size(); j++)
                {
                    if(s[i + j] != t[j])
                    {
                        match = false;
                        break;
                    }
                }
                if(match)
                {
                    s.erase(s.begin() + i, s.begin() + i + t.size());
                    s.insert(i, 1, '#');
                    i += 1; 
                }
                
            }
            
        }
cout << s << endl;
    }
    return 0;
}