class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
        set<int> s1,s2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(auto i: s1){
            if(s2.find(i) == s2.end())
                answer[0].push_back(i);
        }
        for(auto i: s2){
            if(s1.find(i) == s1.end())
                answer[1].push_back(i);
        }
        return answer;
    }
};