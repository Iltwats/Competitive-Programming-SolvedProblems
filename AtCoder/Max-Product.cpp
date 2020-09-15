//Problem Statement: https://atcoder.jp/contests/abc178/tasks/abc178_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
#define all(v) (v).begin(), (v).end()
const ll mod = 10e9 + 7;
int main()
{
  fastio;
  ll a,b,c,d;
  cin>>a>>b>>c>>d;
  ll x=a*c;
  ll y=a*d;
  ll z=b*c;
  ll v=b*d;
  cout<<max({x,y,z,v})<<'\n';  
  //cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;

}
