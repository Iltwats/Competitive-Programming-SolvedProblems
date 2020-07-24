//Problem Statement available at:https://codeforces.com/contest/1390/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int maximum(int x, int y, int z)
{
  int max = x;

  if (y > max)
  {
    max = y;
  }

  if (z > max)
  {
    max = z;
  }
  return max;
}
int main()
{
  ll n;
  cin >> n;
  ll a[n];
  int ma = 0;
  int c1 = 0, c2 = 0, c3 = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
    if (a[i] == 1)
    {
      c1++;
    }
    else if (a[i] == 2)
    {
      c2++;
    }
    else
    {
      c3++;
    }
  }
  int c=maximum(c1,c2,c3);
  if(c==c1)
  {
    cout<<c2+c3<<'\n';
  }
  else if(c==c2)
  {
    cout<<c1+c3<<'\n';
  }
  else
  {
    cout<<c1+c2<<'\n';
  }
  
}
