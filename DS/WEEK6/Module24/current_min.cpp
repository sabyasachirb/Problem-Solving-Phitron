#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> numbers;
    for(int i = 0; i < n; i++)
    {
        int xx;
        cin >> xx;
        numbers.push_back(xx);
    }
    priority_queue<int, vector<int>, greater<int>> min_heap;
    for(int num : numbers)
    {
        min_heap.push(num);
    }
    int nn;
    cin>>nn;
    while(nn--)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            int a;
            cin >> a;
            min_heap.push(a);
            if(min_heap.empty()) cout<<"Empty" << endl;
            else cout << min_heap.top() << endl;
        }
        else if(x == 1)
        {
            if(min_heap.empty()) cout<<"Empty" << endl;
            else cout << min_heap.top() << endl;
        }
        else if(x == 2)
        {
            if(!min_heap.empty()) min_heap.pop();
            if(min_heap.empty()) cout<<"Empty" << endl;
            else cout << min_heap.top() << endl;
        }
    }   
}