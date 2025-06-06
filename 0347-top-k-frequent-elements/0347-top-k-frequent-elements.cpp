class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <pair<int, int>> maxHeap;
        map<int, int> mp;
        for(int i: nums)
            mp[i]++;
        for(auto item:mp)
            maxHeap.push({item.second,item.first});
        vector<int> result;
        while(k--){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return result;
    }
};