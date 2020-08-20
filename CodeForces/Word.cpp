// Problem Statement: https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    string s;
    cin>>s;
    int c1=0,c2=0;
    for (int i = 0; i <s.size(); i++)
    {
        if(isupper(s[i]))
            {
                c1++;
            }
            else
            {
                c2++;
            }
    }
    if(c1>c2)
    {
       for (int i = 0; i <s.size(); i++)
       {
           s[i] = toupper(s[i]);
           cout << s[i];
       }      
    }
    else
    {
        for (int i = 0; i <s.size(); i++)
       {
            s[i] = tolower(s[i]);
            cout << s[i];
       }  

    }
    

    return 0;
}
