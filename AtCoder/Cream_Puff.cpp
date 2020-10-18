// Problem Statement: https://atcoder.jp/contests/abc180/tasks/abc180_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;

vector <ll> factors(ll x) {
    vector <ll> result;
    ll i = 1;
    while(i*i <= x) {
        if(x % i == 0) {
            result.push_back(i);
            if(x/i != i) {
                result.push_back(x/i);
            }
        }
        i++;
    }
    sort(result.begin(),result.end());
    if(true) {
        for(ll i=0; i<result.size(); i++) {
            cout << result[i] << '\n';
        }
    }
    return result;
}

int main()
{
    fastio;
    ll n;
    cin>>n;
    factors(n);
    return 0;
}
