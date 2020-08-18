// Problem Statement: https://codeforces.com/contest/231/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    int n;
    cin>>n;
    int a,b,c,d=0;
    while(n--)
    {
        cin >> a >> b >> c;
		if (a + b + c > 1) 
        {
			d += 1;
		}
    }
    cout<<d<<'\n';

    return 0;
}
