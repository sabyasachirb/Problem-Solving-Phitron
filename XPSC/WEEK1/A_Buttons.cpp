#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    int result = max((a+b), max((2*a-1), (2*b-1)));
    cout << result << "\n";
    return 0;
}