//For problem statement and its details visit: https://codeforces.com/contest/1368/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int a, b, n;
    cin >> a >> b >> n;
    int ans = 0;
    while (max(a, b) <= n) {
      if (a > b) {
        b += a;
      } else {
        a += b;
      }
      ++ans;
    }
    cout << ans << '\n';
  }
  return 0;
}
