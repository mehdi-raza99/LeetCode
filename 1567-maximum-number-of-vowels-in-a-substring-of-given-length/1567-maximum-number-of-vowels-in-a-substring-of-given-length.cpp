class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int length=s.length(),maxVowelCount=0,currentVowelCount=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])) currentVowelCount++;
        }
        maxVowelCount=maxVowelCount < currentVowelCount ? currentVowelCount : maxVowelCount;
        for(int i=k;i<length;i++){
            if(isVowel(s[i-k])) currentVowelCount--;
            if(isVowel(s[i])) currentVowelCount++;
            maxVowelCount=maxVowelCount < currentVowelCount ? currentVowelCount : maxVowelCount;
        }
        return maxVowelCount;
    }
};