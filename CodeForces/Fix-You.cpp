// Problem Statement:https://codeforces.com/contest/1391/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
const ll P=200003;
int main()
{
  fastio;
  int tc;
  cin>>tc;
  while(tc--)
  {
    int n,m;
    cin>>n>>m;
    char a[n][m];
    int c1=0,c2=0;
    for (int i = 0; i <n; i++)
    {
      for(int j=0;j<m;j++)
      {
        cin>>a[i][j];
        if(j==m-1)
        {
          if(a[i][j]=='R')
          {
            c1++;
          }
        }
        else if(i==n-1)
        {
          if(a[i][j]=='D')
          {
            c2++;
          }
        }
      }
    }
    cout<<c1+c2<<'\n';
    
  }
  return 0;
} 
