// Problem Statement: https://atcoder.jp/contests/abc176/tasks/abc176_b

#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	int sum=0;
  for(int i=0;i<len;i++)sum+=s[i]-'0';
    if(sum%9==0)
    {
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<'\n';
    }
	return 0;
}
