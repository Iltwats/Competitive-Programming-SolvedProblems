// Problem Statement: https://leetcode.com/problems/trapping-rain-water/

class Solution
{
    public:
        int trap(vector<int> &a)
        {
            int n = a.size();
            // creating two arrays to store values from both side of initial arrays' and initializing them to 0
            vector<int> left(n, 0);
            vector<int> right(n, 0);
            // if n less than 2 no water can be trapped in between.
            if (n <= 2)
            {
                return 0;
            }
            // initialising the first and last element of both
            left[0] = a[0];
            right[n - 1] = a[n - 1];
            // putting the max value encounter in the array
            for (int i = 1; i < n; i++)
            {
                left[i] = max(left[i - 1], a[i]);
                right[n - i - 1] = max(right[n - i], a[n - i - 1]);
            }
            int totalWater = 0;
            for (int i = 0; i < n; i++)
            {
              // just applying the formula that will store my water collected
                totalWater += min(left[i], right[i]) - a[i];
            }
            return totalWater;
        }
};
