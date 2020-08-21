// Problem Statement: https://codeforces.com/contest/344/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    long long int n, flag = 2, cnt = 0;
        cin >> n;
        long long int a[n + 1];
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(a[i] % 10 != flag)
            {
                flag = a[i] % 10;
                cnt++;
            }
        }
        cout << cnt;

    return 0;
}
