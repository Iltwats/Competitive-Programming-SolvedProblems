// Problem Statement : https://www.codechef.com/LRNDSA02/problems/STFOOD

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{

    fastio;
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int ma = 0;
        for (int i = 0; i < n; i++)
        {
            int s, v, p;
            cin >> s >> p >> v;
            int st = p / (s + 1);
            int sum = st * v;
            ma = max(sum, ma);
        }
        cout << ma << endl;
    }
    return 0;
}