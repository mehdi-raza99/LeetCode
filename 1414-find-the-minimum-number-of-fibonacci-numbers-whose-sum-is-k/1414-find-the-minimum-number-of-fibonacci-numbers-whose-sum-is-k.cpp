class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        int count=0,prev1=1,prev2=1;
        vector<int> fibonacciSequence;
        fibonacciSequence.push_back(1);
        while(prev2 < k){
            int current=prev1+prev2;
            fibonacciSequence.push_back(current);
            prev1=prev2;
            prev2=current;
        }
        for(int i=fibonacciSequence.size()-1;i>=0;i--){
            int times=k/fibonacciSequence[i];
            while(times--){
                k=k-fibonacciSequence[i];
                count++;
            }
            if(k==0)
                break;
        }
        return count;
    }
};