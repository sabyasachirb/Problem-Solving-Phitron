#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    (x % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;
    // Ternary operator: condition ? true_case : false_case
    // Here, if x is even, it prints "Even", otherwise it prints "Odd"
    return 0;
}