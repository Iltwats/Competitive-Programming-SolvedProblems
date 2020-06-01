// Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same 
// frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for
// lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. 
// Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain 
// the same characters but their frequencies do not match. Your task is simple. Given a string, you need to tell if it is a lapindrome.

//Input:
//    First line of input contains a single integer T, the number of test cases.
//    Each test is a single line containing a string S composed of only lowercase English alphabet.
//Output:
//    For each test case, output on a separate line: "YES" if the string is a lapindrome and "NO" if it is not.

//<--Source Code-->

#include <bits/stdc++.h>
using namespace std;
bool lapindromecheck(string s)
{
    // Counter array inisialized with 0
    int count1[26] = {0};
    int count2[26] = {0};

    // Length of the string
    int n = s.length();
    if (n == 1)
        return true;

    // traverse till the middle element is reached
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        // First half
        count1[s[i] - 'a']++;

        // Second half
        count2[s[j] - 'a']++;
    }

    // Checking if values are different
    for (int i = 0; i < 26; i++)
        if (count1[i] != count2[i])
            return false;

    return true;
}
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        
        string s;
        cin >> s;
        if (lapindromecheck(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

   return 0;
}
