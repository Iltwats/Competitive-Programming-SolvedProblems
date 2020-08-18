// Problem Statement: https://codeforces.com/contest/677/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod=10e9+7;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            count++;
        }
        else
        {
            count+=2;
        }

    }
    cout<<count<<'\n'; 
    return 0;
}
