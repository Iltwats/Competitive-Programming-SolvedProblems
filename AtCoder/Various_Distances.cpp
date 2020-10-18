// Problem Statement: https://atcoder.jp/contests/abc180/tasks/abc180_b

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);  cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
    fastio;
    ll n;
    cin>>n;
    ll man_dis=0,euc_dis=0,cheb_dis=0;
    for (int i = 1; i <=n; i++)
    {
        ll y;
        cin>>y;
        ll x = abs(y);
        man_dis=man_dis+x;
        euc_dis+=(x*x);
        cheb_dis=max(cheb_dis,x);
    }
    long double x = (sqrt(euc_dis));
    cout<< man_dis << endl;
    cout<<setprecision(15)<<fixed<<x<<endl;
    cout<<cheb_dis<<endl;
    
    return 0;
}
