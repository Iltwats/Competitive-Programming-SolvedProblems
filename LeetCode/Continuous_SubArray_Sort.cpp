// Problem Statement: https://leetcode.com/problems/shortest-unsorted-continuous-subarray/

class Solution
{
    public:
        // helper function for subarray sort to check if the number is a deviation
        bool outOfOrder(vector<int> ar, int i)
        {
            int ele = ar[i];
            if (i == 0)
            {
                return ele > ar[1];
            }
            if (i == ar.size() - 1)
            {
                return ele < ar[i - 1];
            }
            return ele > ar[i + 1] || ele < ar[i - 1];
        }
        int findUnsortedSubarray(vector<int> &a)
        {
            if (a.size() == 1)
                return 0;
            int smallest = INT_MAX;
            int largest = INT_MIN;
            for (int i = 0; i < a.size(); i++)
            {
                if (outOfOrder(a, i))
                {
                    smallest = min(smallest, a[i]);
                    largest = max(largest, a[i]);
                }
            }

            int s = 0, d = a.size() - 1;
          // if already sorted
            if (smallest == INT_MAX)
            {
                return 0;
            }

            while (smallest >= a[s])
            {
                s++;
            }
            while (largest <= a[d])
            {
                d--;
            }

            return d - s + 1;
        }
};
