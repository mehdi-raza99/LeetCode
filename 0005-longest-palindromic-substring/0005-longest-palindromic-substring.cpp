class Solution {
public:

    int expand(string& s, int left, int right){
        while(left >=0 && right < s.length() && s[left] == s[right]){
            left--;
            right++;
        }

        return right - left - 1;
    }

    string longestPalindrome(string s) {
        int maxLen=1,startPoint=0;
        for(int i=0;i<s.length();i++){
            int len1=expand(s,i,i); //ODD Palindrome check
            int len2=expand(s,i,i+1); //Even Palindrome check
            int len=max(len1,len2);
            if(len > maxLen){
                maxLen=len;
                startPoint=i - (len-1)/2;
            }
        }
        return s.substr(startPoint, maxLen);
    }
};