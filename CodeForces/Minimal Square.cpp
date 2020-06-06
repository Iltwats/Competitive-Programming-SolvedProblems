// For problem satement and its details visit: https://codeforces.com/contest/1360/problem/A 


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int a,b;
        cin>>a>>b;
        int m1,m2,area;
        m1=max(2*b,a);
        m2=max(2*a,b);
        area=min(m1,m2);
        cout<<area*area<<'\n';
        
    }


    return 0;
}
