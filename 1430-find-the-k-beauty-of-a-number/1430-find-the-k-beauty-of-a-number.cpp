class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string number=to_string(num),currentWindow=number.substr(0,k);
        int currentNumber=stoi(currentWindow),result=0,length=number.length(),index=k-1;
        if(num % currentNumber == 0) result++;
        while(index < length-1){
            currentWindow.erase(0,1);
            currentWindow+=number[++index];
            currentNumber=stoi(currentWindow);
            if(currentNumber != 0 && num % currentNumber == 0){
                cout<<currentNumber;
                result++;
            } 
        }
        return result;
    }
};