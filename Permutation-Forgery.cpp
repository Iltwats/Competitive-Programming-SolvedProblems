// Problem Statement: https://codeforces.com/contest/1405/problem/A

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
		  vector<ll>a;
		  for (int i = 0; i < n; i++) 
      {
        long long x; cin >> x;
        a.push_back(x);
		  }
		  reverse(a.begin(),a.end());
      for (int i = 0; i < a.size(); i++)
      {
        cout<<a[i]<<" ";
      }
      cout<<'\n';
  }
  return 0;
}
