// problem Statement: https://codeforces.com/contest/732/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
    fastio;
    int k,r;
    cin >> k>>r;
    int a,no;
    int i=1;
    while(i<11)
    {
        a=k*i;
        if(a%10==0||(a-r)%10==0)
        {
            no=i;
            break;
        }
        i++;
        
    }
    cout<<no<<'\n';
    

    

    return 0;
}
