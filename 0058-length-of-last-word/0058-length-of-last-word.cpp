class Solution {
public:
    int lengthOfLastWord(string s) {
        int endingIndex=s.length()-1;
            while(s[endingIndex] == ' '){
                endingIndex--;
            }
            //I have reached the last letter of last word!
            int startingIndex=endingIndex;
            while(startingIndex > -1 && s[startingIndex] != ' '){
                startingIndex--;
            }
            return endingIndex-startingIndex;
        }
};