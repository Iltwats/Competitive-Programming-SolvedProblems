// Problem Statement: https://atcoder.jp/contests/abc177/tasks/abc177_c
#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;
int main()
{
    fastio;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    long long ans = 0, tot = 0;
    for (int i : a) 
    {
      ans = (ans + tot * i) % mod;
      tot = (tot + i) % mod;
    }
    cout << ans << endl;
    
    
    return 0;
}
