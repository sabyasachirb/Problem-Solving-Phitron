#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> A(n), B(n);
        for (int i=0; i<n; i++)
        {
            cin >> A[i];
        }
        for (int i=0; i<n; i++)
        {
            cin >> B[i];
        }

        bool possible = true;

        for(int i=0; i<n-1; i++)
        {
            bool a_order = (A[i] < A[i + 1]);
            bool b_order = (B[i] < B[i + 1]);

            if (a_order != b_order)
            {
                possible = false;
                break;
            }
        }

        if(possible)
        {
            cout<< "Yes\n";
        }
        else
        {
            cout<< "No\n";
        }
    }

    return 0;
}