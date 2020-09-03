//Problem statement here: https://www.codechef.com/IARCSJUD/problems/LEADGAME

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
    int lead;
    ll p1[tc],p2[tc];
    ll maxi=0,imax=0;
    int lea=0;
    for(int i=0;i<tc;i++)
    {
      
      cin>>p1[i]>>p2[i];
      maxi+=p1[i];
      imax+=p2[i];
      if((maxi-imax)>lea)
      {
        lead=1;
        lea=maxi-imax;
      }
      else if((imax-maxi)>lea)
        {
          lead=2;
          lea=imax-maxi;
        }
        
      }
    
    cout<<lead<<" "<<lea<<'\n';  
    return 0;
}
