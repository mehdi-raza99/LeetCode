class Solution {
public:

    void generateParenthesisRecursive(vector<string>& result, string currentCombination,int n,int open,int close){
        if(n*2 == currentCombination.length()){
            result.push_back(currentCombination);
            return;
        }

        if(open < n){
            currentCombination.push_back('(');
            generateParenthesisRecursive(result,currentCombination,n,open+1,close);
            currentCombination.pop_back();
        }

        
        if(close < open){
            currentCombination.push_back(')');
            generateParenthesisRecursive(result,currentCombination,n,open,close+1);
            currentCombination.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=0, close=0;
        vector<string> result;
        generateParenthesisRecursive(result,"",n,open,close);
        return result;
    }
};