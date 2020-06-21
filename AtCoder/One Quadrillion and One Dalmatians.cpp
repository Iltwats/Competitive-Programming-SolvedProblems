// For problem statement and its details visit: https://atcoder.jp/contests/abc171/tasks/abc171_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long
void f(ll n)
{
  if (n == 0)
    return;
  n--;
  f(n / 26);
  putchar('a' + (n % 26));
}

int main()
{
  ll n;
  scanf("%lld", &n);
  f(n);
}
