// Problem Statement : https://www.codechef.com/OCT20B/problems/CHEFEZQ

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
        ll n, k;
        cin >> n >> k;
        ll Q[n];
        Q[n] = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> Q[i];
        }
        ll qrem, count = 0, flag = 0;
        for (int i = 0; i < n; i++)
        {
            qrem = Q[i] - k;
            Q[i + 1] += qrem;
            if (qrem < 0)
            {
                flag = 1;
                break;
            }
            count++;
        }
        if (flag)
            cout << count + 1 << endl;
        else
            cout << count + (Q[n] / k) + 1 << endl;
        ;
        
    }
    return 0;
}
