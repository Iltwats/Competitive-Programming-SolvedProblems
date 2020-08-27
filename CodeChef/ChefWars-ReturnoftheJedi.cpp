//Problem Statement: https://www.codechef.com/AUG20B/problems/CHEFWARS/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int chefWars(ll h,ll p)
{
    if( p <= 0 and h > 0)
        return false;
    if (h <= 0)
        return true ; 
    ll newHealth = h-p;
    ll newPower = p/2;
    return chefWars(newHealth,newPower);
}

int main()
{
  fastio;
  int tc;
  cin >> tc;
  while (tc--)
  {
    ll h, p;
    cin >> h >> p;
    if (chefWars(h,p) == true)
        cout<<1<<'\n';
    else
        cout<<0<<'\n';
    
  }
  return 0;
}
