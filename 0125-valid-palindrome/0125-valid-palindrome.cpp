class Solution {
public:
    string toLower(string word) {
        for (char &c : word) {
            c = tolower(c);
        }
        return word;
    }


    bool isPalindrome(string s) {
        string lowerCase_Word=toLower(s);
        string filtered_word;
        for(char c: lowerCase_Word){
            if(isalpha(c) || isdigit(c))
                filtered_word.push_back(c);
        }
        int start=0,end=filtered_word.length()-1;

        while(start < end){
            if(filtered_word[start++] != filtered_word[end--])
                return false;
        }

        return true;

    }
};