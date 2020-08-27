// Problem Statement:https://www.codechef.com/AUG20B/problems/LINCHESS/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
  fastio;
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    ll k,x;
    cin>>n>>k;
    ll p[n];
    ll turn=INT_MAX,count=0;
    ll  answer=0;
    for(int i=0;i<n;i++)
    {
      cin>>p[i];
      if(k%p[i]==0)
      {
        x=k/p[i];
        count=x-1;
        turn=min(turn,count);
        if(turn==count)
        {
          answer=p[i];
        }
      }
    }
    if(answer)
    {cout<<answer<<'\n';
    }
    else
    {
      cout<<-1<<'\n';
    }
    
    
    
  }
  return 0;
}
