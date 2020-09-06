//Problem Statement: https://codeforces.com/contest/1409/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
#define all(v) (v).begin(), (v).end()
const ll mod = 10e9 + 7;
int main()
{
  fastio;
  int tc;
  cin>>tc;
  while(tc--)
  {
    ll a,b;
    cin>>a>>b;
    ll d=abs(a-b);
    cout<<(d+9)/10<<'\n';  
  }
  //cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;
}
