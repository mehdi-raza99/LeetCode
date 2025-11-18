class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        set<int> mySet;
        set<int> resultSet;
        for(int number: nums1) mySet.insert(number);

        for(int number: nums2){
            if(mySet.find(number) != mySet.end()) resultSet.insert(number);
        }

        for(const auto& element : resultSet) {
            result.push_back(element);
    }
        return result;
    }
};