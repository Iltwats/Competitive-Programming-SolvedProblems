// Problem Statement: https://codeforces.com/contest/268/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
    fastio;
    int n;
    cin >> n;
    int count = 0;
    int guest[n],host[n];
    for(int i=0;i<n;i++)
    {
        cin>>guest[i]>>host[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(host[i]==guest[j]) count++;
        }
    }

    cout << count << '\n';

    return 0;
}
