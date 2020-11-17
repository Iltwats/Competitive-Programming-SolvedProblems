// Problem Statement: https://www.codechef.com/OCT20B/problems/CVDRUN

#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;

int main()
{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        int pos = 0;
        while (pos < n)
        {
            if (x == y)
            {
                cout << "YES" << '\n';
                break;
            }
            x = (x + k) % n;
            pos++;
        }
        if (pos >= n)
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
