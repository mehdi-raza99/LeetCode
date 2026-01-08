class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> numbers;
        vector<int> result;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(numbers.find(nums[i]) != numbers.end())
                result.push_back(nums[i]);
            else
                numbers.insert(nums[i]);
        }
        return result;
    }
};