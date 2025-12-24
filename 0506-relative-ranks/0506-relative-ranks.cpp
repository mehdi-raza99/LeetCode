class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<string> result(n);
        priority_queue<pair<int,int>> maxHeap;
        for(int i=0;i<n;i++)
            maxHeap.push({score[i],i});
        
        int rank=1;
        while(!maxHeap.empty()){
            auto [score,idx]=maxHeap.top();
            maxHeap.pop();

            if(rank == 1)
                result[idx]="Gold Medal";
            else if(rank == 2)
                result[idx]="Silver Medal";
            else if(rank == 3)
                result[idx]="Bronze Medal";
            else
                result[idx]=to_string(rank);
            rank++;
        }
            return result;
    }
};