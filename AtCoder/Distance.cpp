//Problem statement : https://atcoder.jp/contests/abc174/tasks/abc174_b

#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
  fastio;
  ll n,d;
  cin>>n>>d;
  ll j,k;
  int count=0;
  for(int i=0;i<n;i++)
  {
	  cin>>j>>k;
	  if(j*j+k*k<=d*d)
	  {
		  count++;
	  }
  }
  cout<<count<<'\n';
  return 0;
}
