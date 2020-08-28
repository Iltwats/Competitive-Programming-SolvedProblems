// Problem statement: https://codeforces.com/contest/431/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;

int main()
{
    fastio;
    vector<int>a;
    int n=4;
    a.resize(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }    
    string s;
    cin>>s;
    int cal=0;
    for(int i=0;i<s.size();i++)
    {
        cal+=a[s[i]-'1'];
        
    }
    cout<<cal<<'\n';
    
    
    return 0;
}
