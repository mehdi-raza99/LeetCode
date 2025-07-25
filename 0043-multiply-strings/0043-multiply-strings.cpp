class Solution {
public:

    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0")
            return "0";
        int size1=num1.length();
        int size2=num2.length();
        vector<int> resultVector(size1+size2,0);
        for(int i=size1-1;i>=0;i--){
            for(int j=size2-1;j>=0;j--){
                int mul=(num1[i] - '0') * (num2[j] - '0');
                int sum= mul + resultVector[i+j+1];
                resultVector[i+j+1]=sum%10;
                resultVector[i+j]+=sum/10;
            }
        }


        string result;

        for(int i=0;i<resultVector.size();i++){
            if(!(resultVector[i] == 0 && result.empty())){
                result.push_back(resultVector[i] + '0');
            }
        }
        return result;
    }
};