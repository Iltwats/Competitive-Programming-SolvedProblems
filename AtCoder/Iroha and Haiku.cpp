/*
Problem Statement
Iroha loves Haiku. Haiku is a short form of Japanese poetry. A Haiku consists of three phrases with 5,7 and 5 syllables, in this order.
To create a Haiku, Iroha has come up with three different phrases. These phrases have A,B and C syllables, respectively.
Determine whether she can construct a Haiku by using each of the phrases once, in some order.

Input
The input is given from Standard Input in the following format:
      A B C
Output
If it is possible to construct a Haiku by using each of the phrases once, print YES (case-sensitive). Otherwise, print NO.

Sample Input 1:
      5 5 7
Sample Output 1:
      YES
Sample Input 2:
      7 7 5
Sample Output 2:
      NO
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(((a==5)&&(b==5)&&(c==7))||((a==7)&&(b==5)&&(c==5))||((a==5)&&(b==7)&&(c==5)))
    cout<<"YES"<<"\n";
  else
    cout<<"NO"<<"\n";
  return 0;
}

