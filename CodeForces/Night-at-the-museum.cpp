// Probelem Statement: https://codeforces.com/contest/731/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;

int main()
{
    fastio;
    string s;
    cin>>s;
    char ch = 'a';
    int ans = 0;
    for (char c : s)
    {
        int a = c - ch; //gives us numerical difference between the numbers.
        int b = ch - c;
        if (a < 0)
            a += 26;
        else
            b += 26;
        ans += min(a, b);
        ch = c;
    }
    cout << ans << endl;
    return 0;
}
