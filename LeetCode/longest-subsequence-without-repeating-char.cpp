// Problem statement: https://leetcode.com/problems/longest-substring-without-repeating-characters/ 

class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            vector<int> nonRep(128);
            int right = 0, left = 0, maxCount = 0;
            while (right < s.length())
            {
                char r = s[right];
                nonRep[r]++;
                while (nonRep[r] > 1)
                {
                    char l = s[left];
                    nonRep[l]--;
                    left++;
                }
                maxCount = max(maxCount, right - left + 1);
                right++;
            }
            return maxCount;
        }
};
