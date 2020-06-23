// https://codeforces.com/contest/1369/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    int test;
    cin >> test;
    ll a[test], i;
    for (i = 0; i < test; i++)
    {
        cin >> a[i];
        if (a[i] >= 3)
        {
            int angle = a[i] * (a[i] - 3) / 2;
            if (a[i] % 2 == 0 and angle % 2 == 0)
            {
                cout << "Yes" << '\n';
            }
            else
            {
                cout << "No" << '\n';
            }
        }
    }

    return 0;
}

// There could be one more approach to check for regular convexx polygon if they are perpendicular to axes as a[i]%4==0 in line 21.
