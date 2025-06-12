class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> mySet;
        int longestSequence=0;
        for(int num : nums){
            mySet.insert(num);
        }
        int currentSequence=0;
        for(auto item: mySet){
            if(mySet.find(item+1) != mySet.end()){
                currentSequence++;
            }
            else{
                currentSequence++;
                longestSequence= longestSequence < currentSequence ? currentSequence : longestSequence;
                currentSequence=0;
            }
        }
        return longestSequence;
    }
};