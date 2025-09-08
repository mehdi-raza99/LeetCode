class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_max=nums[0];  //The maximum sum of a subarray ending at the *current position*.
        int global_max=nums[0];  //The maximum sum found anywhere in the array so far.
        for(int i=1; i<nums.size();i++){
            curr_max=max(nums[i],nums[i]+curr_max);
            global_max=max(global_max,curr_max);
        }
        return global_max;
    }
};