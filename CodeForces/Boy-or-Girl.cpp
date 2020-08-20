// Problem statement: https://codeforces.com/contest/236/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    string a;
    cin >> a;
    set<char> p(a.begin(), a.end());
    if ((int)p.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
