// Problem statement : https://codeforces.com/contest/112/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(0);cin.tie(0), cout.tie(0)
int main()
{
    fastio;
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower); // first it takes the pointer from start to end then other from where to transform
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int size = s1.size() | s2.size();
    if (s1 == s2) {
		cout << 0 << endl;
	}
	else if (s1 > s2) {
		cout << 1 << endl;
	}
	else {
		cout << -1 << endl;
	}
    
    return 0;
}
