class Solution {
public:
    vector<vector<int>> result;

    void backTracking(vector<int>& nums, int index,vector<int>& current){
        result.push_back(current);
        for(int i=index;i<nums.size();i++){
            current.push_back(nums[i]);
            backTracking(nums,i+1,current);
            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        backTracking(nums, 0, current);
        return result;
    }
};