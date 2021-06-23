// Problem Statement : https://leetcode.com/problems/3sum/

class Solution
{
    public:
        // in some question target sum could be passed into parameters of this function
        vector<vector<int>> threeSum(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            int target = 0;
            int n = nums.size();
            vector<vector<int>> vec;
            for (int i = 0; i <= n - 3; i++)
            {
                // skipping duplicate triplets
                if (i == 0 || nums[i] != nums[i - 1])
                {
                    int l = i + 1, r = n - 1;
                    // using two pointer approach here
                    while (l < r)
                    {
                        int current = nums[i];
                        current += nums[l];
                        current += nums[r];
                        if (target == current)
                        {
                            vec.push_back({nums[i], nums[l], nums[r]});
                            // skipping duplicate triplets
                            while (l < r && nums[l] == nums[l + 1])
                            {
                                l++;
                            }
                            while (l < r && nums[r] == nums[r - 1])
                            {
                                r--;
                            }
                            l++;
                            r--;
                        }
                        else if (target < current)
                        {
                            r--;
                        }
                        else if (target > current)
                        {
                            l++;
                        }
                    }
                }
            }
            return vec;
        }
};

// Write the main function yourself according to your desired input.
