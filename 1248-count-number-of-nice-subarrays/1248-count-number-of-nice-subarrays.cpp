class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left=0,right=0,n=nums.size(),result=0,count=0,prefixEven=0;
        while(right < n){
            if(nums[right++] % 2 != 0) {
                count++;
                prefixEven=0;
            }
            while(count == k) {
                prefixEven++;
                if (nums[left++] % 2 != 0) {
                    count--;    
                }
            }
            result+=prefixEven;
        }
        return result;
    }
};