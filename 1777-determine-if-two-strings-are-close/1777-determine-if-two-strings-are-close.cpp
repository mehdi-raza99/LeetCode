class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length())
            return false;
        //since we need to sort frequencies, we will use vectors
        vector<int> frequency1(26,0);
        vector<int> frequency2(26,0);
        for(char c:word1)
            frequency1[c - 'a']++;
        for(char c:word2)
            frequency2[c - 'a']++;

         for(int i=0;i<26;i++)
        { //checks if any letter (from 'a' to 'z') exists in one frequency array but not in the other.
            if( (frequency1[i] > 0 && frequency2[i] == 0) || (frequency2[i] > 0 && frequency1[i] == 0) )
                return false;
        }

        sort(frequency1.begin(),frequency1.end());
        sort(frequency2.begin(),frequency2.end());
        for(int i=0;i<26;i++)
        {
            if (frequency1[i] != frequency2[i])
                return false;
        }
        return true;
    }
};