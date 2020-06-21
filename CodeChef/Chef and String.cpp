// For problem statement and ots details visit: https://www.codechef.com/problems/XYSTR

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (((s[i] == 'x') && (s[i + 1] == 'y')) || ((s[i] == 'y') && (s[i + 1] == 'x')))
            {
                count++;
                i = i + 1;
            }
            
        }
        cout << count << '\n';
    }
}
