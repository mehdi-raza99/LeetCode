class Solution {
public:
    bool isVowel(char c)
    {
        if(c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || 
            c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O') 
                return true;
	return false;
    }
    string reverseVowels(string s) {
        int start=0,end=s.length()-1;
        while(start < end)
        {
            if(isVowel(s[start]) && isVowel(s[end])){
                char temp=s[start];
                s[start++]=s[end];
                s[end--]=temp;
            }
            else if(!isVowel(s[start]))
                start++;
            else
                end--;
        }
        return s;
    }
};