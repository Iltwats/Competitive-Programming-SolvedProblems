// Problem statement: https://leetcode.com/problems/subarray-sum-equals-k/

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int count =0;
        unordered_map<int,int> map;
        int sum = 0;
        map.insert({0,1});
        for(int i =0; i<n; i++){
            sum+=arr[i];
            if(map.find(sum-k)!=map.end()){
                count += map[sum-k];   
            }
            map[sum]++;
        }

        return count;
    }
};
