// Problem Statement here: https://codeforces.com/contest/263/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    int a[5][5];
    int steps=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j<5; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                int row=abs(2-i);
                int col=abs(2-j);
                steps=row+col;
            }
        }
        
    }
    cout<<steps<<'\n';
    return 0;
}
