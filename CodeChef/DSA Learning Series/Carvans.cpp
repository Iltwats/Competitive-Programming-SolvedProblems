// You're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers 
// to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed. It 
// still moves at the fastest possible speed while avoiding any collisions. For the purpose of this problem, you can assume that the
// straight segment is infinitely long.
// Count the number of cars which were moving at their maximum speed on the straight segment.

//  Input
//      The first line of the input contains a single integer T denoting the number of test cases to follow. 
//      Description of each test case contains 2 lines. The first of these lines contain a single integer N, the number of cars.
//      The second line contains N space separated integers, denoting the maximum speed of the cars in the order they entered the 
//      long straight segment.

//  Output
//      For each test case, output a single line containing the number of cars which were moving at their maximum speed on the segment.

//<--Source Code-->

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n, a, m = INT_FAST32_MAX, c = 0;
        cin >> n;
        while (n--)
        {
            cin >> a;
            if (a < m)
            {
                c++;
                m = a;
            }
        }
        cout << c << "\n";
    }
    return 0;
}
