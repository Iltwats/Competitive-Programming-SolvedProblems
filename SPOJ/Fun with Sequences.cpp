// For problem statement and its details :https://www.spoj.com/problems/SMPSEQ3/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	int s[n];
	for (int i = 0; i < n; i++)
	{
		cin>>s[i];
	}
	int k;
	cin>>k;
	int q[k];
	for (int i = 0; i < k; i++)
	{
		cin>>q[i];
	}
	int i,j;
	for (i = 0, j = 0; i < n && j < k;)
	{
		if (s[i] - q[j] < 0)
		{
			cout<<s[i]<<" ";
			i++;
		}
		else if (s[i] == q[j])
			i++;
		else
			j++;
	}

	for (; i < n; i++)
	{
		cout<<s[i];
	}
	cout<<'\n';

	return 0;
}
