// To view the problem and its details visit: https://atcoder.jp/contests/abc169/tasks/abc169_e

#include <bits/stdc++.h>

using namespace std;

int const maxn = 2e5 + 5;
int a[maxn], b[maxn];

main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i];
    }
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    if (n % 2 == 1)
        cout << b[(n + 1) / 2] - a[(n + 1) / 2] + 1 << '\n';
    else
        cout << (b[n / 2] + b[n / 2 + 1] - a[n / 2] - a[n / 2 + 1]) + 1 << '\n';
    return 0;
}
