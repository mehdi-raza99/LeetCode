class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size(),sum=0;
        double maxAvg=-999999;
        for(int i=0;i<k;i++)
            sum+=nums[i];
        double currentAvg=sum/(double)k;
        maxAvg=maxAvg>currentAvg?maxAvg:currentAvg;
        for(int i=k;i<n;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            currentAvg=sum/(double)k;
            maxAvg=maxAvg > currentAvg ? maxAvg : currentAvg;
        }
        return maxAvg;
    }
};