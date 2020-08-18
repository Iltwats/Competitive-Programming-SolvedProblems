//Problem Statement: https://codeforces.com/contest/791/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod=10e9+7;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=0;
    while(b>=a)
    {
        if(a<=b)
        {
            a*=3;
            b*=2;
            c++;
        }
    }
    cout<<c<<'\n';      
    return 0;
}
