class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> numbers;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(numbers.find(nums[i]) != numbers.end())
                return true;
            else
                numbers.insert(nums[i]);
        }
        return false;
    }
};