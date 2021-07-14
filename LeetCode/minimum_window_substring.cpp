// Problem Statement: https://leetcode.com/problems/minimum-window-substring/

class Solution {
public:
    string minWindow(string s, string p) {
        // hashmap of all characters
        int FP[256] = {0};
        int FS[256] = {0};

        for(int i=0;i<p.length();i++){
            FP[p[i]]++;
        }
        int count =0;
        int start_window = -1;
        int min_window_len = INT_MAX;
        int window_size;
        int start = 0;
        for(int i=0;i<s.length();i++){
            char ch = s[i];
            FS[ch]++;
            // count how many characters have been matched
            if(FP[ch]!=0 and FS[ch]<=FP[ch]){
                count++;
            }
            // if all characters matched contract from left if all characters are matched
            if(count==p.length()){
                while (FP[s[start]]==0 or FS[s[start]] > FP[s[start]])
                {
                    FS[s[start]]--;
                    start++;
                }
                window_size = i-start+1;
                // if window found, find minimum window so far
                if(window_size<min_window_len){
                    min_window_len = window_size;
                    start_window = start;
                }
            }
        }
        if(start_window==-1){
            return "";
        }
      return s.substr(start_window,min_window_len);

    }
};
