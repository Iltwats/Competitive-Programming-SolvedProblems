//Problem Statement: https://codeforces.com/contest/1406/problem/A

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
    ll n;
    cin>>n; 
    vector<ll>a(n);
    for (auto &t : a) 
    {
      cin >> t;
    }
    sort(a.begin(),a.end());
    ll mex1=0;
    ll mex2=0;
    for (auto &t : a) 
    {
      if(t==mex1)mex1++;
      else if (t==mex2)
      {
        mex2++;
      }  
    }
    cout<<mex1+mex2<<'\n';
  }
  //cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
  return 0;

}
