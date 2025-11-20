class Solution {
public:
    bool wordPattern(string pattern, string s) {
        set<string> words;
        map<char,string> mp;
        int index=0,n=pattern.length(),i=0,m=s.length();
        string currWord="";
        while(index < n){
            //first find current word
            while(i < m && s[i] != ' ') currWord+=s[i++];

            //Assign or check if already present and match
            if(mp.find(pattern[index]) != mp.end()){
                if(mp[pattern[index]] != currWord){
                    return false;
                }
            }
            else{
                if(words.find(currWord) == words.end()) words.insert(currWord);
                else return false;
                mp[pattern[index]]=currWord;
            }
            currWord="";
            index++,i++;
        }
        return index == n && i-1 ==m? true : false;
    }
};