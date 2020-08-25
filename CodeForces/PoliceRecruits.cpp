// Problem Statement:https://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;

int main()
{
    fastio;
    ll k;    
    cin>>k;
    ll a[k];
    int pos=0,crime=0;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        if(a[i]>0) pos+=a[i];
        

        if(a[i]==-1)
        {
            if(pos>0) pos--;
            else crime++;
        }
        
    }
    cout<<crime<<'\n';
    return 0;
}
