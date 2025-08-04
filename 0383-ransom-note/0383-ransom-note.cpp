class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> hashTable;
        for(int i=0;i<magazine.length();i++)
            hashTable[magazine[i]]++;

        for(int i=0;i<ransomNote.length();i++){
            if(hashTable[ransomNote[i]] <= 0){
                return false;
            }
            hashTable[ransomNote[i]]--;
        }
        return true;
    }
};