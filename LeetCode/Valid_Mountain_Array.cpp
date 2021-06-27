// Problem Statement: https://leetcode.com/problems/valid-mountain-array/

class Solution
{
  public:
    bool validMountainArray(vector<int> &a)
    {
        int n = a.size();

        int largest = 0;

        for (int i = 1; i <= n - 2;)
        {

            //check a[i] is peak or not
            if (a[i] > a[i - 1] and a[i] > a[i + 1])
            {
                //do some work
                int cnt = 1;
                int j = i;
                //cnt backwards (left)
                while (j >= 1 and a[j] > a[j - 1])
                {
                    j--;
                    cnt++;
                }
                //cnt forwards (right)
                while (i <= n - 2 and a[i] > a[i + 1])
                {
                    i++;
                    cnt++;
                }
                largest = max(largest, cnt);
            }
            else
            {
                i++;
            }
        }
        return largest == n;
    }
};


// Although you might find a problem where you want to return length of Mountain, just return largest.
