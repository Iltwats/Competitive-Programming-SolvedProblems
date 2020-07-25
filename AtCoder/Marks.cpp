// Problem Statement can be viewed here:https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_c

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int N, K;
	cin >> N >> K;
	vector<int> A(N);
	for (int i = 0;i < N;i++) 
  {
		cin >> A[i];
		if (i >= K) 
    {
			if (A[i] > A[i - K]) 
      {
				cout << "Yes" << endl;
			}
			else 
      {
				cout << "No" << endl;
			}
		}
	}
}
