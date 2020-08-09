// Problem statement here: https://codeforces.com/contest/1391/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
  fastio;
  int tc;
  cin>>tc;
  while(tc--)
  {
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
      cout<<i<<" ";
    }
    cout<<'\n';
  }
  return 0;
} 
// Using pigeon hole principle for this.
