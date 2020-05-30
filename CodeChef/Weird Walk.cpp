// To see the problem and its details visit : https://www.codechef.com/LTIME84B/problems/WWALK

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int wierdwalk(ll a[], ll b[], ll n);

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll count;
        cin >> count;
        ll a[count],b[count];
        ll i;
        for ( i = 0; i < count; i++)
        {
            cin>>a[i];
            
        }
        for ( i = 0; i < count; i++)
        {
            cin >> b[i];
        }
        
        cout<<wierdwalk(a,b,count)<<'\n';

         }
}
int wierdwalk(ll a[],ll b[], ll n)
{
    ll sum=0,sum1=0,sum2=0;
    for (int i = 0; i < n; i++)
    {   
        sum1+=a[i];
        sum2+=b[i];
        if ((a[i] == b[i])&&(sum1==sum2))
        {
            sum += b[i];
        }
    }

    return sum;
}
