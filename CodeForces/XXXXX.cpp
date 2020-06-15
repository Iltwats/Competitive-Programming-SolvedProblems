// For probelm statement and its details visit: https://codeforces.com/contest/1364/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,x,sum=0,l=-1,r;
        cin>>n>>x;
        for (int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if (a%x)
            {
                if (l==-1)
                l=i;
                r=i;
            }
            sum+=a;
        }
        if (sum%x)
        printf("%d\n",n);
        else if (l==-1)
        printf("-1\n");
        else
        printf("%d\n",n-min(l+1,n-r));
    }
}
