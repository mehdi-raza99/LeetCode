class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int size=nums.size();
        for(int i=0;i<size;i++){
            int index=abs(nums[i]) - 1;
            if(nums[index] < 0) result.push_back(index+1);
            else    nums[index]=-nums[index];
        }
        return result;
    }
};