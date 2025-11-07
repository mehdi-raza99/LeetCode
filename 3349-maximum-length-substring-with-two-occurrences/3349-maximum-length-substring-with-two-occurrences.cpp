class Solution {
public:
    int maximumLengthSubstring(string s) {
        int start=0,end=0,length=s.length(),result=0;
        vector<int> freq(26,0);
        for(int end=0;end<length;end++){
            freq[s[end] - 'a']++;
            while(freq[s[end] - 'a'] > 2){
                freq[s[start++] - 'a']--;
            }
            result=max(result,(end-start)+1);
        }
    return result;
    }
};