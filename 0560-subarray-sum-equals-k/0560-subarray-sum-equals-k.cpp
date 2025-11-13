class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),count=0;
        vector<int> prefixSum;
        prefixSum.push_back(nums[0]);
        for(int i=1;i<n;i++){
            prefixSum.push_back(prefixSum[i-1] + nums[i]);
        }
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(prefixSum[i] == k) count++;
            int diff=prefixSum[i]-k;
            if(mp.find(diff) != mp.end()){
                count+=mp[diff];
            }
            mp[prefixSum[i]]++;
        }
        return count;
    }
};