class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> hmap;
        int size=nums.size(),operations=0;
        for(int i=0;i<size;i++){
            hmap[nums[i]]++;
        }
        for(int i=0;i<size;i++){
            if(hmap[nums[i]] > 0){
                hmap[nums[i]]--;
                int remaining=k-nums[i];
                if(remaining > 0 && hmap[remaining] > 0){
                    operations++;
                    hmap[remaining]--;
                }
            }
        }
        return operations;
    }
};