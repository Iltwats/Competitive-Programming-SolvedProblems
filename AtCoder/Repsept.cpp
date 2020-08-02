// Problem statement available here:https://atcoder.jp/contests/abc174/tasks/abc174_c

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int K;
  cin >> K;
  int x = 7 % K;
  for(int i = 1; i <= K; ++i)
  {
  	if(x == 0){
    cout << i << endl;
    return 0;
    }
    x = (x * 10 + 7) % K;
  }
  cout << -1 << endl;
  return 0;
}
