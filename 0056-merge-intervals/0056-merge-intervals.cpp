class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0]; // Compare the first elements
        });
        int length=intervals.size();
        vector<vector<int>> result;
        int start=intervals[0][0], end=intervals[0][1],i=1;
        while(i < length){
            if(intervals[i][0] > end){
                result.push_back({start,end});
                start=intervals[i][0];
                end=intervals[i][1];
            }
            else{
                if(end < intervals[i][1]){
                    end=intervals[i][1];
                }
            }
            i++;
        }
        result.push_back({start,end});
        return result;
    }
};