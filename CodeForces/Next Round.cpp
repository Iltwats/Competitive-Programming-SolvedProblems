// For problem and its details visit: https://codeforces.com/contest/158/problem/A

#include <bits/stdc++.h>
using namespace std;
#define in long long
int main()
{
    int n,k;;
    cin>>n>>k;
    int i,a[n],k_score,count=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i] == 0)
        {
            continue;
        }
        else if (i < k - 1)
        {
            count++;
        }
        else if (i == k - 1)
        {
            k_score = a[i];
            count++;
        }
        else if (a[i]== k_score)
        {
            count++;
        }
    }
    cout<<count<<'\n';

    
}
