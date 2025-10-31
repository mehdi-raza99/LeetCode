class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalMax=nums[0],currentSum=nums[0],size=nums.size();
        for(int i=1;i<size;i++){
            currentSum=max(nums[i],nums[i]+currentSum);
            globalMax=max(globalMax,currentSum);
        }
        return globalMax;
    }
};




























