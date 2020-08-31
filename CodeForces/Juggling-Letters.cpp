// Problem statement: https://codeforces.com/contest/1397/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
#define all(v) (v).begin(), (v).end()
const ll mod = 10e9 + 7;

int main()
{
  fastio;
  int tc;
  cin>>tc;
  while(tc--)
  {
    vector<ll>alpha(26);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      string tmp;
      cin>>tmp;
      for (int i = 0; i < tmp.size(); i++)
      {
        alpha[tmp[i]-'a']++;
      }
      
    }
    int flag=0;
    for (int i = 0; i < 26; i++)
    {
      if(alpha[i]%n!=0) flag=1;
    }
    if(flag==1)cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    
  }
   
  return 0;
}
