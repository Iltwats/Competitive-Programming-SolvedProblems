// Problem Statement here:https://www.codechef.com/IARCSJUD/problems/BOOKLIST

#include <bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;
int main()
{
    fastio;
    int tc;
    cin>>tc;
    vector<int>books(tc);
    for(int &t:books)cin>>t;
    int n;
    cin>>n;
    while(n--)
    {
      int entry;
      cin>>entry;
      cout<<books[entry-1]<<'\n';
      books.erase(books.begin()+entry-1);
    }
    return 0;
}
