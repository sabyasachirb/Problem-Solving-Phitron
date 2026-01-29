#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
        int cnt = 0;
        
        stack<char> st;
        for(char c : s) {
            if(c == '1' && st.empty()) 
            {
                st.push(c);

            }
            else if(c == '0' && !st.empty()) 
            {
                cnt++;
                
            }
            else if(c == '1' && !st.empty()) 
            {
                st.pop();
                st.push(c);
            }
        }
	}
}

