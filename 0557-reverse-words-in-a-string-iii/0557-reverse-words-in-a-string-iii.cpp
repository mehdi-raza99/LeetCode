class Solution {
public:
    int wordLength(string& s,int start){
        int end=start;
        while(end < s.length() && s[end] != ' ') end++;
        return end-1;
    }
    void reverse(string& s,int start,int end){
        while(start < end){
            swap(s[start],s[end]);
            start++,end--;
        }  
    }
    string reverseWords(string s) {
        int i=0,size=s.length();
        while(i < size){
            int currentWordLength=wordLength(s,i);
            reverse(s,i,currentWordLength);
            i=currentWordLength+2;
        }
        return s;
    }
};