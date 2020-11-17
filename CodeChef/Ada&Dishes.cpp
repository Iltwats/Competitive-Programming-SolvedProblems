// Problem Statement : https://www.codechef.com/NOV20B/problems/ADADISH
#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const ll mod = 998244353;

int main()
{
    fastio; // this is a user defined macro used for handling input output bottleneck for large numbers.
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int ma = 1000;
        int s1, s2;
        if (n == 1)
        {
            ma = a[0];
        }
        else if (n == 2)
        {
            ma = max(a[0], a[1]);
        }
        else
        {
            s1 = a[n - 1], s2 = a[n - 2];
            for (int i = n - 3; i >= 0; i--)
            {
                if (s1 < s2)
                {
                    s1 += a[i];
                }
                else
                {
                    s2 += a[i];
                }
            }
            ma = max(s1, s2);
        }

        cout << ma << '\n';
    }
    return 0;
}