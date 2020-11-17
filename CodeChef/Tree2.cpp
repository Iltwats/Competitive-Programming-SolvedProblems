// Problem Statement: https://www.codechef.com/SEPT20B/problems/TREE2
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
	  set<ll>a;
	  for (int i = 0; i < n; i++) 
      {
        long long x; cin >> x;
        if(x>0)
        {
          a.insert(x);
        }
	  }
	cout<<a.size()<<'\n';
  }
  return 0;
}