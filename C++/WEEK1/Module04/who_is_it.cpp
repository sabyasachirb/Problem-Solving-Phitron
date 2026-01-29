// #include<bits/stdc++.h>
// using namespace std;
// class Students
// {
//     public:
//     int id;
//     string name;
//     char section;
//     int total_marks;
// };


// int main()
// {
//    int T;
//    cin >> T;
//    while (T--)
//    {
//     Students a, b , c;
//     cin >> a.id >> a.name >> a.section >> a.total_marks;
//     cin >> b.id >> b.name >> b.section >> b.total_marks;
//     cin >> c.id >> c.name >> c.section >> c.total_marks;

//     if (a.total_marks > b.total_marks && a.total_marks > c.total_marks)
//     {
//         cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
//     }
//     else if (b.total_marks > a.total_marks && b.total_marks > c.total_marks)
//     {
//         cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
//     }
//     else if( c.total_marks > a.total_marks && c.total_marks > b.total_marks)
//     {
//         cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;
//     }
//     else if(a.total_marks == b.total_marks && a.total_marks > c.total_marks)
//     {
//         if(a.id < b.id)
//         {
//             cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
//         }
//         else
//         {
//             cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
//         }
//     }
//     else if(b.total_marks == c.total_marks && b.total_marks > a.total_marks)
//     {
//         if(b.id < c.id)
//         {
//             cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
//         }
//         else
//         {
//             cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;
//         }
//     }
//     else if(c.total_marks == a.total_marks && c.total_marks > b.total_marks)
//     {
//         if(c.id < a.id)
//         {
//             cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;
//         }
//         else
//         {
//             cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
//         }
//     }
//    }
    
// }



#include<bits/stdc++.h>
using namespace std;
class Students
{
    public:
    int id;
    string name;
    char section;
    int total_marks;
};


int main()
{
   int T;
   cin >> T;
   while (T--)
   {
    Students a, b , c;
    cin >> a.id >> a.name >> a.section >> a.total_marks;
    cin >> b.id >> b.name >> b.section >> b.total_marks;
    cin >> c.id >> c.name >> c.section >> c.total_marks;

    int max_marks = max({a.total_marks, b.total_marks, c.total_marks});
    if ((a.total_marks == max_marks) && (a.id < b.id && a.id < c.id)) 
        cout << a.id << " " << a.name << " " << a.section << " " << a.total_marks << endl;
    else if ((b.total_marks == max_marks) && (b.id < a.id && b.id < c.id)) 
        cout << b.id << " " << b.name << " " << b.section << " " << b.total_marks << endl;
    else if ((c.total_marks == max_marks) && (c.id < a.id && c.id < b.id)) 
        cout << c.id << " " << c.name << " " << c.section << " " << c.total_marks << endl;

    }
}
    


