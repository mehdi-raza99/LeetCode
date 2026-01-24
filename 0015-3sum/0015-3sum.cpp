class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> validThreeSum;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            int target=-nums[i];
            set<int> seen;
            for(int j=i+1;j<nums.size();j++){
                int need=target-nums[j];
                if(seen.find(need) != seen.end()){
                    validThreeSum.push_back({nums[i],need,nums[j]});
                    while(j+1<n && nums[j] == nums[j+1]) j++;
                }
                seen.insert(nums[j]);   
            }
    }    
    return validThreeSum;
    }
};