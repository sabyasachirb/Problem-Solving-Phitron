// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x = 10; //stack memory allocation
//     int *p = new int; // Heap / Dynamically allocate memory for an integer
//     *p = 20; // Assign a value to the dynamically allocated memory
//     cout << "Value of x: " << x << endl;
//     cout << "Value pointed to by p: " << *p << endl;
//     delete p; // Free the dynamically allocated memory
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

    int* p;
    void fun()
    {
        int* x = new int;
        *x =10;
        p = x;
        cout<< "Fun -> " << *p << endl;
        return;
    }
    int main()
    {
        fun();
        cout << "Main -> " << *p << endl;
        return 0;
    }
