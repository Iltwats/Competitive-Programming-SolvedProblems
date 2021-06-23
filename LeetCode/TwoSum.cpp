// Problem Statement: https://leetcode.com/problems/two-sum/


// 1. In this solution you're printing indexes of the pairs
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hash;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            int numberToFind = target - nums[i];
            if (hash.find(numberToFind) != hash.end())
            {
                result.push_back(hash[numberToFind]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
      return result;
    }
};

// 2. In this solution you're printing pairs itself.
vector<int> findPairs(vector<int> num, int sum)
{
    set<int> numSet;
    vector<int> vectorPair;
    for(int i = 0;i<num.size();i++){
        int temp = sum - num[i];
        if(numSet.find(temp)!=numSet.end()){
            vectorPair.push_back(temp);
            vectorPair.push_back(num[i]);
            return vectorPair;
        }
        numSet.insert(num[i]);
    }
    return {};
}
