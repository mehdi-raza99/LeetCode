class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int> resultSet;
        int n1=nums1.size(),n2=nums2.size(),index1=0,index2=0;
        while(index1 < n1 && index2 < n2){
            if(nums1[index1] == nums2[index2]){
                resultSet.insert(nums1[index1]);
                index1++,index2++;
                continue;
            }
            if(nums1[index1] < nums2[index2])
                index1++;
            else
                index2++;
        }

        for(const auto& element : resultSet) {
            result.push_back(element);
    }
        return result;
    }
};