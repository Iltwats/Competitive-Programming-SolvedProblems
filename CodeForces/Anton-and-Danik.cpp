// Problem Statement: https://codeforces.com/contest/734/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod=10e9+7;
int main()
{
    int n;
    cin>>n;
    char ch[n];
    int c1=0,c2=0;
    for (int i = 0; i < n; i++)
    {
        cin>>ch[i];
        if(ch[i]=='A')
        {
            c1++;
        }
        else if(ch[i]=='D')
        {
            c2++;
        }
    }
    if(c1>c2) cout<<"Anton"<<'\n';
    else if(c1<c2) cout<<"Danik"<<'\n';
    else cout<<"Friendship"<<'\n';    
    return 0;
}
