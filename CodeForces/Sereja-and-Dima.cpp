// Problem Statement: https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;

int main()
{
    fastio;
    ll k,sum=0,m;    
    cin>>k;
    ll a[k];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];        
    }
    int start=0;
    int end=k-1;
    int s=0,d=0;
    for(int i=0;i<k;i++)
    {
        if(i%2==0)
        {
            if(a[start]>a[end])
            {
                s+=a[start];
                start++;
            }
            else
            {
                s+=a[end];
                end--;
            }

        }
        else
        {
             if(a[start]>a[end])
            {
                d+=a[start];
                start++;
            }
            else
            {
                d+=a[end];
                end--;
            }
        }
    }
    cout<<s<<" "<<d<<'\n';
    return 0;
}
