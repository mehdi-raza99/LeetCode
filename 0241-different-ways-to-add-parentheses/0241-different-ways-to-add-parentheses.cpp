class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> res;
        int length=expression.length();
        for(int i=0;i<length;i++){
            char character=expression[i];
            if(character == '+' || character == '*' || character == '-' ){
                vector<int> leftExpressionComputation=diffWaysToCompute(expression.substr(0,i));
                vector<int> rightExpressionComputation=diffWaysToCompute(expression.substr(i+1));

                for(int leftExpressionValue: leftExpressionComputation){
                    for(int rightExpressionValue: rightExpressionComputation){
                        if(character == '+') res.push_back(leftExpressionValue + rightExpressionValue);
                        else if(character == '-') res.push_back(leftExpressionValue - rightExpressionValue); 
                        else if(character == '*') res.push_back(leftExpressionValue * rightExpressionValue);
                    }
                }
            }
        }
        if(res.empty()) res.push_back(stoi(expression));
        return res;
    }
};