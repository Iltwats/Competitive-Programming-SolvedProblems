// For problems and its details visit: https://www.codechef.com/problems/AGECAL


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc, i, n, x, ans, m[10005], d1, m1, y1, d2, m2, y2, days;
    cin>>tc;
    while (tc--)
    {
        scanf("%d", &n);
        m[0] = 0;
        days = 0;
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &x);
            days += x;
            m[i] = m[i - 1] + x;
        }
        scanf("%d %d %d", &y1, &m1, &d1);
        scanf("%d %d %d", &y2, &m2, &d2);
        ans = days * (y2 - y1) + (m[m2 - 1] - m[m1 - 1]) + (d2 - d1);
        for (i = y1; i < y2; i++)
        {
            if (i % 4 == 0)
                ans++;
        }
        printf("%d\n", ans + 1);
    }
    return 0;
}
