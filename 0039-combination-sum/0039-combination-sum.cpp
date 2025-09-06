class Solution {
public:
    vector<vector<int>> result;

    void backTracking(vector<int>& candidates, int target, int sum, int start, vector<int>& current){
        if(sum == target){
            result.push_back(current);
            return;
        }
        if(sum > target) return;

        for(int i=start;i<candidates.size();i++){
            current.push_back(candidates[i]);
            backTracking(candidates, target, sum+candidates[i], i, current);
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        backTracking(candidates,target,0, 0, current);
        return result;
    }
};