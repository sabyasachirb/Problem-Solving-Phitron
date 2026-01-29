#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testCases;
    cin >> testCases;

    while(testCases--)
    {
        string s;
        cin >> s;
        
        bool foundMatch = false;
        
        for(int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i-1])
            { 
                char differentChar;
                if(s[i] == 'z')
                {
                    differentChar = 'a';  
                }
                else
                {
                    differentChar = s[i] + 1;  
                }
                
                s.insert(i, 1, differentChar);
                foundMatch = true;
                break; 
            }
        }
        

        if(!foundMatch)
        {

            char lastChar = s.back(); 
            char differentChar;
            if(lastChar == 'z')
            {
                differentChar = 'a';
            }
            else
            {
                differentChar = lastChar + 1;
            }
            
            s.push_back(differentChar); 
        }
        
        cout << s << "\n";
    }
    
    return 0;
}