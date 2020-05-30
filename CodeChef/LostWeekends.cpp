// For problem statement and its details visit: https://www.codechef.com/LTIME84B/problems/LOSTWKND

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,sum=0;
        int week=5;
        int P;
        while(week--)
        {
            cin>>n;
            sum+=n;
                        
        }
        cin>>P;
        sum*=P;
        //cout<<sum<<'\n';
        if (sum > 120)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
}
