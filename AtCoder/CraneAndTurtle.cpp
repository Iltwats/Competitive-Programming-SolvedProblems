//For problem statement and its details visit: https://atcoder.jp/contests/abc170/tasks/abc170_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
	if (y % 2 == 0 && 2 * x <= y && y <= 4 * x)
    cout << "Yes" << endl;
	else 
    cout << "No" << endl;
}