// FOr problem statement and its details visit: https://atcoder.jp/contests/abc170/tasks/abc170_c

#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int X, N;
    cin >> X >> N;
    vector<int> P(200);
    for (int i = 0; i < N; ++i)
    {
        int p;
        cin >> p;
        ++P[p];
    }
    int ans = -1, d = 200;
    for (int i = 0; i < 200; ++i)
    {
        if (P[i])
            continue;
        if (d > abs(i - X))
        {
            d = abs(i - X);
            ans = i;
        }
    }
    cout << ans << endl;
}