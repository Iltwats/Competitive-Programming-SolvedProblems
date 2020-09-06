// Problem Statement:https://codeforces.com/contest/228/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
    fastio;
    int a[4];
    set<int> s;
    for (int i = 0; i <4; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    int l=s.size();
    cout<<4-l<<'\n';  
    return 0;
}
