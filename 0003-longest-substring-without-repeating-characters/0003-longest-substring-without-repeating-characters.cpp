class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0,n=s.length(),result=0;
        set<char> seen;
        while(right < n){
            if(seen.find(s[right]) == seen.end()){
                seen.insert(s[right]);
            }
            else{
                while(s[left] != s[right]){
                    seen.erase(s[left++]);
                } 
                left++;
            }
            result=max(result,right-left+1);
            right++;
        }
        return result;
    }
};