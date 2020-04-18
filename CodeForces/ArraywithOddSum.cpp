//You are given an array a consisting of n integers.
//In one move, you can choose two indices 1≤i,j≤n such that i≠j and set ai:=aj.
//You can perform such moves any number of times (possibly, zero). You can choose different indices in different operations.
//The operation := is the operation of assignment (i.e. you choose i and j and replace ai with aj).
//Your task is to say if it is possible to obtain an array with an odd (not divisible by 2) sum of elements.
//You have to answer t independent test cases.
//For each test case, print the answer on it — "YES" (without quotes) if it is possible to obtain the 
//array with an odd sum of elements, and "NO" otherwise.

#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int testcases, no_of_testCases;
    int arr[100];

    cin >> no_of_testCases;
    for (int i = 0; i < no_of_testCases; i++)
    {
        int sum = 0;
        bool odd = false, even = false;
        cin >> testcases;
        for (int i = 0; i < testcases; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < testcases; i++)
        {
            sum += arr[i];
        }
        {
            if (sum % 2 != 0)
            {
                odd = true;
            }
            else
            {
                even = true;
            }
        }

        if ((sum % 2 != 0) || (odd && even))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        }
}
