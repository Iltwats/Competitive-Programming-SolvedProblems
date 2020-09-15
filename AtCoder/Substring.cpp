// Problem Statement: https://atcoder.jp/contests/abc177/tasks/abc177_b

#include <iostream>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
const ll mod = 10e9 + 7;
int main()
{
    fastio;
    string S,T; cin>>S>>T;
	  int ans = T.size();
    for (int start = 0; start <= S.size() - T.size(); start++)
    {
        int diff = 0;
        for (int i = 0; i < T.size(); i++)
        {
            if (T[i] != S[start + i]) 
            {
                diff++;
            }
        }
        ans = min(ans, diff);
    }
 
    cout << ans << endl;
}
