// For problem statement and its details visit: https://www.codechef.com/JUNE20B/problems/PRICECON

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int N,K,P;
        cin>>N>>K;
        int i,a[N];
        ll sum1=0,sum2=0;
        int loss;
        for(i=0;i<N;i++){
            cin>>a[i];
            sum1=sum1+a[i];
            
        }
        for(i=0;i<N;i++){
            if(a[i]>K){
                a[i]=K;
            }
            sum2=sum2+a[i];
        }
        loss=sum1-sum2;
        cout<<loss<<'\n';
       
    }
}
