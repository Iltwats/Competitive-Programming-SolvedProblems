// For problem statement and its details refer to codechef website: https://www.codechef.com/LRNDSA01/problems/MULTHREE


// <--Source Code-->

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int TC;
    cin >> TC;
    while (TC--)
    {
        ll K, d0, d1;
        cin >> K >> d0 >> d1;
        ll sumOfDigits = d0 + d1;
        if (K > 2)
        {
            ll d2 = (sumOfDigits % 10);
            if (d2 == 5 or d2 == 0)
                sumOfDigits += d2; 
            else
            {
                ll d3 = (sumOfDigits += d2) % 10;
                sumOfDigits = ((K - 3) / 4) * 20 + d0 + d1 + d2;
                int nextDigit = d3;
                ll remcon=(K-3)%4;
                while(remcon--)
                {
                    sumOfDigits += nextDigit;
                    nextDigit = (sumOfDigits) % 10;
                   
                }
            }
        }
        cout << ((sumOfDigits % 3 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}
