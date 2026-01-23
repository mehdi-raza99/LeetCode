class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<bool> numbers(n+1,false);
        vector<int> disappearedNumbers;
        for(int i: nums){
            numbers[i]=true;
        }

        for(int i=1;i<numbers.size();i++){
            if(numbers[i] == false) disappearedNumbers.push_back(i);
        }
        return disappearedNumbers;
    }
};