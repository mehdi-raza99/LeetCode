class Solution {
public:

    int getSum(int num){
        int result=0;
        while(num!=0){
            int remainder=num%10;
            result+=remainder;
            num=num/10;
        }
        return result;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> MAP; //SUM,INDEX
        int maxSum=-1;
        for(int i=0;i<nums.size();i++){
            int currSum=getSum(nums[i]);
            if(MAP.count(currSum)){
                maxSum=max(maxSum,nums[MAP[currSum]] + nums[i]);
                if(nums[i] > nums[MAP[currSum]])    MAP[currSum]=i;
            }
            else
                MAP[currSum]=i;
        }
        return maxSum;
    }
};