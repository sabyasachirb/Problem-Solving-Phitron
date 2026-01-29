#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            pos[p[i]] = i;
        }
        vector<bool> present(n, true);
        int totalDisturbances = 0;
        for (int person = n; person >= 1; person--)
        {
            int position = pos[person];
            int leftCount = 0;
            for (int i = 0; i < position; i++)
            {
                if (present[i])
                    leftCount++;
            }
            int rightCount = 0;
            for (int i = position + 1; i < n; i++)
            {
                if (present[i])
                    rightCount++;
            }
            int disturbances = min(leftCount, rightCount);
            totalDisturbances += disturbances;
            present[position] = false;
        }

        cout << totalDisturbances << "\n";
    }

    return 0;
}