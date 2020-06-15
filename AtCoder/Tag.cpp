// For problem statements and its details visit: https://atcoder.jp/contests/tokiomarine2020/tasks/tokiomarine2020_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a, v, b, w, t;
  cin >> a >> v >> b >> w >> t;
  long long d = abs(a - b);
  if (v > w && d <= (v - w) * t) 
  {
    cout << "YES" << '\n';
  } 
  else
  {
    cout << "NO" << '\n';
  }
  return 0;
}
