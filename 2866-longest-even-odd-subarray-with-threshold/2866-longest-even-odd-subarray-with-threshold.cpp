class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int result=0,start,end,size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i] % 2 == 0 && nums[i] <= threshold){
                start=i;
                while((i < size-1) && (nums[i] % 2 != nums[i + 1] % 2) && (nums[i] <= threshold && nums[i+1] <= threshold)){
                    i++;
                }
                end=i;
                result= (end-start)+1 > result ?  (end-start)+1 : result;
            }
        }
        return result;
    }
};