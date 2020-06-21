//For problem statement and its details visit: https://codeforces.com/contest/1370/problem/A
// Solution:Answer for any n≥2 is equal to |n/2|

#include < bits/stdc++.h >
using namespace std;
#define endl "\n"
#define int long long

const int N = 1e5 + 5;
int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << n / 2 << endl;
	}
	return 0;
}
