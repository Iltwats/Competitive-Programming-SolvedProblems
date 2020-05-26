// For Problem statement and its details visit: https://www.codechef.com/LRNDSA01/problems/LADDU

//<--Source Code-->

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int tc;
   cin>>tc;
   while(tc--)
   {
     int N,ld=0;
     string area,ss;
     cin>>N>>area;
          while(N--)
          {
              int am;
              cin >> ss;
              if(ss == "CONTEST_WON") 
              {				 cin >> am;
                       ld += 300 + max(0, 20-am);
			        }
			        else if(ss == "TOP_CONTRIBUTOR") 
                  ld += 300;
			        else if(ss == "BUG_FOUND") 
              {
                    cin >> am;
                    ld += am;
              }
			        else if(ss == "CONTEST_HOSTED") 
                  ld += 50;
          }
     if(area=="INDIAN")
       cout<<ld/200<<"\n";
     else
       cout<<ld/400<<"\n";
   }
	 return 0;
}
