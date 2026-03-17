class Solution {
public:
    void sortColors(vector<int>& nums) {

        int start=0,end=nums.size()-1,curr=0;

        while(curr <= end){
            if(nums[curr] == 0)
                swap(nums[start++],nums[curr++]);
            else if(nums[curr] == 2)
                swap(nums[end--],nums[curr]);
            else
                curr++;
        }
    }
};