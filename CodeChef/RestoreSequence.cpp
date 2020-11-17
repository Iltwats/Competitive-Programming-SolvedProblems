// Problem Statement : https://www.codechef.com/NOV20B/problems/RESTORE

#include <bits/stdc++.h>
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const ll mod = 998244353;
vector<ll> SieveOfEratosthenes(ll n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    vector<ll> primeArray;

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            primeArray.push_back(p);

    return primeArray;
}

int main()
{
    fastio; // this is a user defined macro used for handling input output bottleneck for large numbers.
    ll tc;
    cin >> tc;
    vector<ll> a = SieveOfEratosthenes(4000000);
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> mainArray;
        vector<ll> userArray;
        for (ll i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            userArray.push_back(k);
            mainArray.push_back(a[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            ll a = userArray[i];
            mainArray[i] = mainArray[a - 1];
        }
        for (ll i = 0; i < n; i++)
        {
            cout << mainArray[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}