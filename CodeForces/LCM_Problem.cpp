// Problem statement can be viewed here: https://codeforces.com/contest/1389/problem/A

#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
#define fastio                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
  fastio;
  int tc;
  cin >> tc;
  while (tc--)
  {
    ll l,r;
    cin>>l>>r;
		if(r<2*l)
		cout<<-1<<" "<<-1<<endl;
		else
		cout<<l<<" "<<2*l<<endl;
  }
  return 0;
}
