// Problem Statement:https://codeforces.com/problemset/problem/1374/B

#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long
#define fastio                  \
  ios_base::sync_with_stdio(0); \
  cin.tie(0), cout.tie(0)
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
		int cnt2 = 0, cnt3 = 0;
		while (n % 2 == 0) {
			n /= 2;
			++cnt2;
		}
		while (n % 3 == 0) {
			n /= 3;
			++cnt3;
		}
		if (n == 1 && cnt2 <= cnt3) {
			cout << 2 * cnt3 - cnt2 << endl;
		} else {
			cout << -1 << endl;
		}
    
  }

  return 0;
}
