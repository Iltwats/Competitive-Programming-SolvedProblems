// Problem statement: https://www.codechef.com/IARCSJUD/problems/LONGPALI
#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;
bool palindrome(string s, int a)
{
  if (a == 1)
    return true;
  else
  {
    for (int i = 0; i < a / 2; i++)
    {
      if (s[i] != s[a - i - 1])
        return false;
    }
    return true;
  }
}
int main()
{
  fastio;
  int n, l = 0;
  cin >> n;
  string s, ans;
  cin >> s;
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j <= n - i; j++)
    {
      if (palindrome(s.substr(i, j), j) && l < j)
      {
        ans = s.substr(i, j);
        l = j;
      }
    }
  }
  cout << l << '\n'
       << ans << '\n';
  return 0;
}
