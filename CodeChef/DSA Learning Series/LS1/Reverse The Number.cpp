// If an Integer N, write a program to reverse the given number.
// Input
//         The first line contains an integer T,total number of testcases.Then follow T lines, each line contains an integer N.
// Output 
//         Display the reverse of the given number N.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,tc;
    int rem,reverse=0;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        while(n!=0)
        {
            rem=n%10;    
            reverse=reverse*10+rem; 
            n/=10;  
        }  
        cout<<reverse<<endl;
        reverse=0;

    }
    return 0;
}
