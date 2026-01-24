class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left <=right){
            cout<<left<<right<<endl;
            int middle=(left+right)/2;
            if(nums[middle] == target)
                return middle;

            if(nums[left] <= nums[middle]){ //left sorted array
                if(target >= nums[left] && target < nums[middle])
                    right=middle-1;
                else
                    left=middle+1;
            }
            else{
                if(target > nums[middle] && target <= nums[right])
                    left=middle+1;
                else
                    right=middle-1;
            }
        }
        return -1;
    }
};