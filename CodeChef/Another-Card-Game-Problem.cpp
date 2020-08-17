// Problem Statement:https://www.codechef.com/AUG20B/problems/CRDGAME3

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
  fastio;
  int tc;
  cin >> tc;
  while (tc--)
  {
    ll c, r;
    cin >> c >> r;
    ll c1 ,r1;
    if(c%9==0)
    {
      c1=c/9;
    }
    else
    {
      c1=c/9+1;
    }
    if(r%9==0)
    {
      r1=r/9;
    }
    else
    {
      r1=r/9+1;
    }
   
    if (c1 == r1)
      cout << 1 << " " << r1 << '\n';
    else if (c1 > r1)
      cout << 1 << " " << r1 << '\n';
    else
      cout << 0 << " " << c1 << '\n';
  }
  return 0;
}
