class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int start=0, end=n-1;
        while(start < end){
            int sum=numbers[start]+numbers[end];
            if(target == sum){
                return {start+1,end+1};
            }
            else if(target > sum)
                start++;
            else
                end--;
        }
        return {};
    }
};