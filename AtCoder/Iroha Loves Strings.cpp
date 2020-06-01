/*
Problem Statement
Iroha has a sequence of N strings S1,S2,...,SN. The length of each string is L.
He will concatenate all of the strings in some order, to produce a long string.Among all strings that she can produce in this way,
find the lexicographically smallest one.

Here, a string s=s1s2s3... is lexicographically smaller than another string t=t1t2t3...tm if and only if one of the following holds:
There exists an index i(1≦i≦min(n,m)), such that sj=tj for all indices j(1≦j<i), and si<ti.si=ti for all integers i(1≦i≦min(n,m)), and n<m.

Input
The input is given from Standard Input in the following format:

        N L
        S1
        S2
        :
        SN
Output
Print the lexicographically smallest string that Iroha can produce.

Sample Input 1:
        3 3
        dxx
        axx
        cxx
Sample Output 1:
        axxcxxdxx

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    string S[N];
    string str="";
    
    for(int i = 0; i < N; i++){
        cin >> S[i];
    }
    sort(S, S + N);   //sort the string lexicographically
    for(int i = 0; i < N; i++){
        str += S[i];
    }
    cout << str << endl;
}
