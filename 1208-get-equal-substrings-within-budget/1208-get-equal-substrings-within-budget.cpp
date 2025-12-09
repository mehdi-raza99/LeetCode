class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int result=0,n=s.length(),left=0,right=0,currentCost=0;
        while(right < n){
            int cost=abs(s[right] - t[right]);
            currentCost+=cost;
            while(currentCost > maxCost){
                currentCost-= abs(s[left] - t[left]);
                left++;
            }
            result= (right-left+1) > result ? (right-left+1) : result;
            right++;
        }
        return result;
    }
};