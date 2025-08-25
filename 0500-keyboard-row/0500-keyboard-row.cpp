#include <string>
#include <cctype>
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        string row1="qwertyuiop",row2="asdfghjkl",row3="zxcvbnm";
        for(string word: words){
            string currentRow;
                if (row1.find(tolower(word[0])) != std::string::npos) {
                    currentRow=row1;
                } 
                else if (row2.find(tolower(word[0])) != std::string::npos){
                    currentRow=row2;
                }
                else{
                    currentRow=row3;
                }
            bool flag=true;
            for(int i=1;i<word.length();i++){
                char currentChar=tolower(word[i]);
                if(currentRow.find(currentChar) != std::string::npos){
                    continue;
                }
                else{
                    flag=false;
                    break;
                }
            }
            if(flag)    result.push_back(word);
        }
        return result;
    }
};