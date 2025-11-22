class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        int n=nums.size(),result=0, left = 0;
        long long prod = 1;
        for(int right=0;right<n;right++){
            prod*=nums[right];
            while(prod >= k){
                prod/=nums[left];
                left++;
            }

            result+=(right-left+1);
        }
        return result;
    }
};