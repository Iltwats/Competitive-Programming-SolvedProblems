// for problem statements and details visit: https://codeforces.com/contest/1366/problem/A

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        int c = (a + b) / 3;
        int an = min(a, b);
        int ans = min(an, c);
        cout << ans << '\n';
    }
}
