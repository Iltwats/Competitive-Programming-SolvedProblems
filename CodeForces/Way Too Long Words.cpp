//For problem statement and its constraints visit: https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;
#define in long long
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin>>s;
        int c=s.length();
        if(s.length()>10){
            cout<<s[0]<<c-2<<s.back()<<'\n';               
        }
        else
        {
            cout<<s<<'\n';
        }
        
    }
}
