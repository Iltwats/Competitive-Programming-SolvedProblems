// Problem Statement: https://codeforces.com/contest/1405/problem/B
#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;
int main()
{
  fastio;
  int tc;
  cin>>tc;
  while(tc--)
  {
      int n;
      cin >> n;
      long long cur = 0;
      for (int i = 0; i < n; ++i) 
      {
        long long x; cin >> x;
        cur = max(0ll, cur + x);
      }
      cout << cur << "\n";
  }
  return 0;
}
