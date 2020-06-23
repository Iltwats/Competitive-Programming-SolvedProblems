https://codeforces.com/contest/1369/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
bool mat[100][100];
int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0, j = n;
        while (i < n && s[i] == '0')
            ++i;
        while (j > 0 && s[j - 1] == '1')
            --j;
        if (i == j)
        {
            cout << s << "\n";
        }
        else
        {
            cout << s.substr(0, i) + '0' + s.substr(j) << "\n";
        }
    }
    return 0;
    }

// Explanation:If the string s is non-decreasing, then the answer is s itself, otherwise the answer is x+1 zeroes and y ones, where x is the number 
// of leading zeroes of the string s, and y is the number of trailing ones of the string s.
