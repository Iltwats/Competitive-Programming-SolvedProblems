// For problem details and its constraints visit: https://atcoder.jp/contests/abc171/tasks/abc171_b

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int N, K;
  cin >> N >> K;
  int a[N];
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  sort(a, a + N);
  int sum = 0;
  for (int i = 0; i < K; i++)
  {
    sum += a[i];
  }
  cout << sum << '\n';
}
