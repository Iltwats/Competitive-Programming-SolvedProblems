// To see the problems and its details visit: https://atcoder.jp/contests/nomura2020/tasks/nomura2020_b

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string T;
    cin >> T;
    int length = (int)T.length();
 
    for (int i = 0; i < length; i++)
    {
        if (T[i] == '?')
            T[i] = 'D';
    }
 
    cout << T;
 
    return 0;
}
