class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int result=0;
        for(int i: nums){    
            if(i>0)
                pq.push(i);
        }
        while(!pq.empty()){
            int curr=pq.top();
            pq.pop();
            while(!pq.empty() && pq.top() == curr)  pq.pop();
            result++;
            }
        return result;
    }
};