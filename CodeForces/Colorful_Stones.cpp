// Problem Statement: https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;
int main()
{
  fastio;
  string s,t;
  cin>>s>>t;
  int count=0;
  for(int i=0,j=0;i<t.size();i++)
  { 
	  if(s[j]==t[i])
	  {
		  count++;
		  j++;
	  }
  }
  cout<<count+1<<'\n';
  
  return 0;
}



