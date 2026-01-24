class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        vector<vector<int>> result;
        for(int i=0;i<size-2;i++)
        {
            if( i > 0 && nums[i] == nums[i-1]) continue;
            int left=i+1,right=size-1;
            while(left < right)
            {
                int target=-nums[i],total=nums[left]+nums[right];
                if(total == target){ 
                    vector<int> individualTriplet = {nums[i],nums[left],nums[right]};
                    result.push_back(individualTriplet);
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
            }
                else if(total > target) right--;
                else left++;
            }
        }
        return result;
    }
};