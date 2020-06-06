// For problem and its details visit: https://codeforces.com/problemset/problem/1360/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int &x : a)      // this is equivalent to for(int x=0;x<a.size();x++)
        {
            cin >> x;
        }

        sort(a.begin(), a.end());   //sorting the array 

        int result = a[n - 1] - a[0];

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                result = min(result, a[j] - a[i]);
            }
        }

        cout << result << endl;
    }

    return 0;
}
