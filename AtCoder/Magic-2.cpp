// Problem Statement can be viewed here: https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_b

#include <bits/stdc++.h>
using namespace std;
int main(){
  int A, B, C;
  cin >> A >> B >> C;
  int K;
  cin >> K;
  int cnt = 0;
  while (B <= A)
  {
    B *= 2;
    cnt++;
  }
  while (C <= B)
  {
    C *= 2;
    cnt++;
  }
  if (cnt <= K)
  {
    cout << "Yes" << endl;
  } 
  else 
  {
    cout << "No" << endl;
  }
}
