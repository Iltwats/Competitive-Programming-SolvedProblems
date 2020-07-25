// View the problem statement here:https://www.codechef.com/LTIME86B/problems/CHEFSTEP
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    //freopen(input.txt, 'r', stdin);
    //freopen(output.txt,'w', stdout);
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n,k;
        cin>>n>>k;
        for (ll i = 0; i <n; i++)
        {
            ll d;
            cin>>d;
            if(d%k==0)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
            
        }
        cout<<'\n';
    }
}
