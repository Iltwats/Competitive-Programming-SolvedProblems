// Problem Statement:https://codeforces.com/contest/266/problem/A

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
    char ch[n];
    cin>>ch;
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if(ch[i]==ch[i+1])
        {
            count++;      
        }
    }
    cout<<count<<'\n';
    
    return 0;
}
