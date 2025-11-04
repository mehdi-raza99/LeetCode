class Solution {
public:
    string longestNiceSubstring(string s) {
        if (s.size() < 2) return "";
        int length=s.length();
            cout<<s<<endl;
        set<char> st(s.begin(),s.end());
        for(int i=0;i<length;i++){
            char ch=s[i];
            if(st.count(tolower(ch)) && st.count(toupper(ch))) continue;
            string leftNiceSubstring=longestNiceSubstring(s.substr(0,i));
            string rightNiceSubstring=longestNiceSubstring(s.substr(i+1));
            return leftNiceSubstring.length() >= rightNiceSubstring.length() ?  leftNiceSubstring : rightNiceSubstring;
        }
        return s;
    }
};