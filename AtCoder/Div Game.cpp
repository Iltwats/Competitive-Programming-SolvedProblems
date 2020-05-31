// To view the problem and its details visit: https://atcoder.jp/contests/abc169/tasks/abc169_d

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    
    ll N;
    cin >> N;
    ll ans = 0;
    for (ll i = 2; i * i <= N; i++)
    {
        if (N % i != 0)
            continue;
        ll num = 0;
        while (N % i == 0)
        {
            N /= i;
            num++;
        }
        for (ll j = 1;; j++)
        {
            if (num >= j)
            {
                num -= j;
                ans++;
            }
            else
                break;
        }
    }
    if (N != 1)
        ans++;
    cout << ans << endl;
    return 0;
}
