class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size(),result=0,prefixSum=0;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            prefixSum+=nums[i];
            if(prefixSum == goal)   result++;
            int diff=prefixSum-goal;

            if(mp.find(diff) != mp.end()) result+=mp[diff];

            mp[prefixSum]++;
        }
        return result;
    }
};