// Problem Statement: https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3411/
// Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
// Note: For the purpose of this problem, we define empty string as valid palindrome.
// Example 1:
//    Input: "A man, a plan, a canal: Panama"
//    Output: true
// Example 2:
//    Input: "race a car"
//    Output: false

/*---------------------------------------------------------------------------------------------------------------------------------------------------------*/

class Solution {
public:
    bool isPalindrome(string str) {
        int l = 0, h = str.length(); 
        for (int i = 0; i < h; i++) 
        str[i] = tolower(str[i]); 
   
        while (l <= h) 
        { 
            if (!(str[l] >= 'a' && str[l] <= 'z')&& !(str[l]>=48 && str[l] <=57)) 
             l++; 
        
            else if (!(str[h] >= 'a' && str[h] <= 'z')&& !(str[h]>=48 && str[h] <=57))
             h--; 
   
            else if (str[l] == str[h]) 
             l++, h--; 
   
            else
             return false; 
       } 
    return true;       
    }
};
