
// To view the problem and its details visit: https://atcoder.jp/contests/abc169/tasks/abc169_b



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define double long double
int a[100005];
int inf = 1e18;

main()
{
    int ans = 1, n, x;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            cout << 0;
            exit(0);
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        if (ans > inf/ (double)a[i] )
        {
            cout << -1;
            exit(0);
        }
        ans *= a[i];
    }
    cout << ans << '\n';
    return 0;
}
//
