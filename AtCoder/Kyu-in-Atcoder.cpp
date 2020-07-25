// Problem statement can be viewed here:https://atcoder.jp/contests/m-solutions2020/tasks/m_solutions2020_a

//Naive Approach
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin >> n;
  if(n>=400 and n<=599)
  {
    cout<<8<<'\n';
  }
  else if (n>599 and n<800)
  {
    cout<<7<<'\n';
  }
  else if(n>799 and n<1000)
  {
    cout<<6<<'\n';
  }
  else if (n>999 and n<1200)
  {
    cout<<5<<'\n';
  }
  else if (n>1199 and n<1400)
  {
    cout<<4<<'\n';
  }
  else if (n>1399 and n<1600)
  {
    cout<<3<<'\n';
  }
  else if(n>1599 and n<1800)
  {
    cout<<2<<'\n';
  }
  else if(n>1799 and n<2000){
    cout<<1<<'\n';
  }
}

//Effiecient Approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a;
    a=10-(x/200);
    cout<<a;
}
