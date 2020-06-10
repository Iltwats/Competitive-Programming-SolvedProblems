// For problem details and constraints visit: https://codeforces.com/contest/1365/problem/A
#include<bits/stdc++.h>
using namespace std;

#define IOS    ios::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int mat[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        int row = 0, col = 0;
        for (int i = 0; i < n; i++)
        {
            bool poss = true;
            for (int j = 0; j < m; j++)
                if (mat[i][j])
                    poss = false;
            row += poss;
        }

        for (int j = 0; j < m; j++)
        {
            bool poss = true;
            for (int i = 0; i < n; i++)
                if (mat[i][j])
                    poss = false;
            col += poss;
        }

        if (min(row, col) % 2)
            cout << "Ashish";
        else
            cout << "Vivek";

        cout << endl;
    }

    return 0;
}