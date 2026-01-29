#include<iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    switch(c)
    {
        case 'a':
        case 'A':
            cout << "Vowel" << endl;
            break;
        case 'e':
        case 'E':
            cout << "Vowel" << endl;
            break;
        case 'i':
        case 'I':
            cout << "Vowel" << endl;
            break;
        case 'o':
        case 'O':
            cout << "Vowel" << endl;
            break;
        case 'u':
        case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }
    return 0;
}