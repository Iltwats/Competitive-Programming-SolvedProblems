/*
  Given an array containing N integers, find length of longest band.
  
  A band is defined as a subsequence which can be reordered in such a manner, all elements appear
  consecutive(i.e with absolute difference of 1 between neighbouring elements).
  
  A longest band is a band( subsequence) which contains maximum elements.
 */

#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestBand(vector<int> a){
    set<int> setNum;
    // unordered set because lookup time is O(n)
    for (int x : a)
    {
        setNum.insert(x);
    }
    int longest = 1;
    for(auto s: setNum){
        int head = s-1;
        // if that element doesnt have a head it could start a band
        // total time complexity will be O(n+w) where w is length of band so total will be O(n)
        if (setNum.find(head) == setNum.end())
        {
            int cnt = 1;
            int nextNo = s+1;
            // find all the chains that could be there
            while (setNum.find(nextNo)!=setNum.end())
            {
                nextNo++;
                cnt++;
            }
            // if any point we have cnt greater than longest, change the variable
            if(cnt>longest){
                longest = cnt;
            }
            
        }
    }
    return longest;
    
}
int main(){
       vector<int> num{1, 9, 3, 0, 18, 5, 2,4, 10, 7, 12, 6};
       int peak = longestBand(num);
       cout << peak;
   }  
   TIME; 
}
