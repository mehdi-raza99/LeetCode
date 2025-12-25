class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        for(int weight:stones)  heap.push(weight);

        while(heap.size() > 1){
            int a=heap.top();
            heap.pop();
            int b=heap.top();
            heap.pop();
            if(a == b)  continue;
            else heap.push(abs(a-b));
        }
        return heap.size() == 0? 0: heap.top();
    }
};