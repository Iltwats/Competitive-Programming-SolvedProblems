// Problem Statement: https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;

int main()
{
    fastio;
    int n;
    cin>>n;
    int one=0,two=0,three=0;
    vector<ll> v1,v2,v3;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            one++;
            v1.push_back(i+1);
        }
        else if(a==2)
        {
            two++;
            v2.push_back(i+1);
        }
        else 
        {
            three++;
            v3.push_back(i+1);
        }
    }
    int c=min(one,two);
    int teams=min(c,three);
    cout<<teams<<'\n';
    for ( int i = 0; i < teams; i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<'\n';
    }
    
    
    return 0;
}
