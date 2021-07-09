// Problem Statement: https://leetcode.com/problems/find-and-replace-pattern/

class Solution
{
    public:
        bool match(string s, string pattern)
        {
            map<char, char> m1, m2;
            for (int i = 0; i < s.length(); ++i)
            {
                char w = s[i];
                char p = pattern[i];
                if (!(m1.find(w) != m1.end()))
                    m1.insert({w, p});
                if (!(m2.find(p) != m2.end()))
                    m2.insert({p, w});
                if (m1.at(w) != p || m2.at(p) != w)
                    return false;
            }
            return true;
        }
        vector<string> findAndReplacePattern(vector<string> &words, string pattern)
        {
            vector<string> wordMatch;
            for (string s : words)
            {
                if (match(s, pattern))
                {
                    wordMatch.push_back(s);
                }
            }
            return wordMatch;
        }
};
