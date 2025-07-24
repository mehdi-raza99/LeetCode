class Solution {
public:

    string lengthEncoding(string number){
        string result="";
        int count=1,length=number.length();
        for(int i=0;i<length;i++){
            if(i+1 < length && number[i] == number[i+1]){
                count++;
            }
            else{
                result=result+to_string(count)+number[i];
                count=1;
            }
        }
                return result;
    }

    string countAndSay(int n) {
        string result="1";      //base case
        for(int i=1;i<n;i++){
            result=lengthEncoding(result);
        }
        return result;
    }
};
