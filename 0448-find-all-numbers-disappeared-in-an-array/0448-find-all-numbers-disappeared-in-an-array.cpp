class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> disappearedNumbers;
        for(int i=0;i<nums.size();i++){
                int absoluteIndex=abs(nums[i]) - 1;
                nums[absoluteIndex]=-abs(nums[absoluteIndex]);
            }


        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                disappearedNumbers.push_back(i+1);
            }
        }

        return disappearedNumbers;
    }
};