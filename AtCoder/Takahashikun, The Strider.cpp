//For problem statement and its details visit: https://atcoder.jp/contests/agc046/tasks/agc046_a

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int x;
  cin >> x;
  cout << 360 / __gcd(360, x) << '\n';
  return 0;
}
