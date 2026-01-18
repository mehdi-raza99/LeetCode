class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> result;
        vector<int> startValues;
        unordered_map<int,int> startIntervalIndexes;
        for(int i=0;i<intervals.size();i++){
            startValues.push_back(intervals[i][0]);
            startIntervalIndexes[intervals[i][0]]=i;
        }

        sort(startValues.begin(),startValues.end());

        for(int i=0;i<intervals.size();i++){
            int currentEnd=intervals[i][1];
            int left=0,right=startValues.size()-1;
            while(left <= right){
                int mid=(left+right)/2;
                if(startValues[mid] == currentEnd){
                    left=mid;
                    break;
                };
                if(startValues[mid] > currentEnd) right=mid-1;
                else    left=mid+1;
            }
            if(left < startValues.size())
                result.push_back(startIntervalIndexes[startValues[left]]);
            else
                result.push_back(-1);
        }

        return result;
    }
};