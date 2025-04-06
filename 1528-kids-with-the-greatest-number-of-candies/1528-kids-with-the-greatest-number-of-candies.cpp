class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int greatestNumberOfCandies=1;
        for(int i=0;i<candies.size();i++)
        {
            greatestNumberOfCandies=greatestNumberOfCandies < candies[i]?candies[i]:greatestNumberOfCandies;
        }
        for(int i=0;i<candies.size();i++)
        {
            result.push_back((candies[i]+extraCandies) >= greatestNumberOfCandies?true:false);
        }
        return result;
    }
};