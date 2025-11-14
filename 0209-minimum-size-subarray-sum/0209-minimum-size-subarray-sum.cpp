class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,n=nums.size(),right=0,currentSum=0,minLength=INT_MAX;
        while(right < n){
            currentSum+=nums[right];
                while(currentSum >= target){
                    minLength=min(right-left+1, minLength);
                    currentSum-=nums[left++];
                }
            right++;
            }
        return minLength == INT_MAX? 0 : minLength;
    }
};