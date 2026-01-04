class Solution {
public:
    vector<int> getDivisors(int num){
        vector<int> result;
        if(num > 1){
            result.push_back(1);
            result.push_back(num);
        }
        else result.push_back(1);

        for(int i=2;i<=sqrt(num);i++){
            if(num%i == 0){
                result.push_back(i);
                if(i != (num/i)) result.push_back(num/i);
            }
        }
        return result;
    }

    int getSum(vector<int> divisors){
        int sum=0;
        for(int i: divisors) sum+=i;
        return sum;
    }
    int sumFourDivisors(vector<int>& nums) {
        int result=0,n=nums.size();
        for(int i=0;i<n;i++){
            vector<int> divisorList=getDivisors(nums[i]);
            if(divisorList.size() == 4){
                result+=getSum(divisorList);
            }
        }
    return result;
    }
};