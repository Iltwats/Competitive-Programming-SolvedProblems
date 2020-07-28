// Problem Statement can be viewed here: https://codeforces.com/problemset/problem/1385/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod=10e9+7;
int main()
{
  fastio;
  int tc;
  cin>>tc;
  while(tc--)
  {
    vector<int> a(3);
    for(int i=0;i<a.size();i++) cin>>a[i];
    sort(a.begin(),a.end());
    if(a[1]!=a[2])
    {
      cout<<"NO"<<endl;
    }
    else
    {
      cout << "YES" << endl << a[0] << " " << a[0] << " " << a[2] << endl;
    }    
  }
  return 0;
}
