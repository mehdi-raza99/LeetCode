class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size(),result=0;
        for(int i=0;i<n;i++){
            if(nums[i] < k) result++;
            int currProduct=nums[i];
            for(int j=i+1;j<n;j++){
                currProduct*=nums[j];
                if(currProduct < k) result++;
                else break;
            }
        }
        return result;
    }
};