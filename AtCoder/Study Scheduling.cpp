// To view the problem statement and its details visit: https://atcoder.jp/contests/nomura2020/tasks/nomura2020_a


#include<bits/stdc++.h>
using namespace std;
int main(){
    int h1,m1,h2,m2,k;
    int t1,t2;
    int s,t;
    cin>>h1>>m1>>h2>>m2>>k;
    t1=h1*60+m1;
    t2=h2*60+m2;
    t=t2-t1;
    s=t-k;
    cout<<s<<"\n";
    return 0;
}
