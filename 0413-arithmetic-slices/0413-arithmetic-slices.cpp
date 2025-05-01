class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() < 3)
            return 0;
        vector<int> count(nums.size(),0);
        if( nums[1] - nums[0] == nums[2] - nums[1] )
            count[2]=1;
        int previousDifference=nums[2] - nums[1];
        for(int i=3;i<nums.size();i++){
            if(nums[i] - nums[i-1] == previousDifference)
                count[i]=count[i-1]+1;
            else
                count[i]=0;
            previousDifference=nums[i] - nums[i-1];
        }
       int sum=0;
       for(int i=2;i<count.size();i++){
            sum+=count[i];
        }
        return sum;
    }
};