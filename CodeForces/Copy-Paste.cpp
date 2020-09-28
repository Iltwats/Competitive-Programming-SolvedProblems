//Problem statement: https://codeforces.com/contest/1417/problem/A

#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0)
using namespace std;
#define ll long long
const int mod = 1'000'000'007;

int main()
{
	fastio;
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		int sum=0,count=0;
		bool check=true;
		while(check){
			int j=0;
			if(sum<=k){
				sum=a[j+1]+a[j];
				a[j+1]+=a[j];
				if(sum<=k){
				count++;
				}
			}
			else if(sum>k){
				sort(a,a+n);
				sum=0;
				if(a[j]+a[j+1]>k){
					check=false;
				}
			}

		}
		cout<<count<<'\n';
	}

	return 0;
}

 
