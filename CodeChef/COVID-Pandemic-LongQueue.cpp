// Problem Statements: https://www.codechef.com/problems/COVIDLQ

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
	cin>>N;
	while(N--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int flag=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==1)
	        {
	            for(int j=i+1;j<i+6 && j<n;j++)
	            {
	                if(a[j]==1)
	                {
	                    flag=1;
	                    break;
	                }
	            }
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
}
