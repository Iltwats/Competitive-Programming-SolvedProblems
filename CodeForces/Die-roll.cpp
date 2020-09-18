// Problem Statement: https://codeforces.com/contest/9/problem/A

#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;
int main()
{
	fastio;
	int x, y, z = 1, a;
	cin >> x >> y;
	a = 7 - max(x, y);
	if (a % 2 == 0)
	{
		z *= 2;
	}
	if (a % 3 == 0)
	{
		z *= 3;
	}
	cout << a / z << "/" << 6 / z << endl;
	return 0;
}
