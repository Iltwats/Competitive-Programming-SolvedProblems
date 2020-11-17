// Problem Statement : https://www.codechef.com/OCT20B/problems/POSAND

#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        if (n > 1 and isPowerOfTwo(n))
        {
            cout << -1 << '\n';
        }
        else
        {
            if (n == 1)
            {
                cout << 1 << '\n';
            }
            else if (n == 3)
            {
                cout << 2 << " " << 3 << " " << 1 << '\n';
            }
            else
            {
                cout << 2 << " " << 3 << " " << 1 << " ";
                for (int i = 4; i <= n; i++)
                {
                    if (isPowerOfTwo(i))
                    {
                        cout << i + 1 << " " << i << " ";
                        i++;
                    }
                    else
                    {
                        cout << i << " ";
                    }
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
