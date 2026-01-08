class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],n=prices.size(),maxProfit=0;
        for(int i=1;i<n;i++){
            int currProfit=prices[i] - min;
            if(currProfit > 0){
            maxProfit+= currProfit;
            }
            min=prices[i]; 
        }
        return maxProfit;
    }
};