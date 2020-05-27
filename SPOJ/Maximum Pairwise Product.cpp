#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,arr[30],i,j;
    ll mul=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;++i)
    {
        for (j = i+1; j < n; ++j)
        {
            mul=max(mul,arr[i]*arr[j]);
        }
         
    }
    cout<<mul<<"\n";
    return 0;
}
