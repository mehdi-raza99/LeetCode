class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
        vector<string> rows(numRows,"");
        int direction=1,idx=0;
        for(char c: s){
            rows[idx].push_back(c);

            if(idx == numRows-1)
                direction=-1;
            
            if(idx == 0)
                direction=1;
            idx+=direction;
        }
        string result;
        for(int i=0;i<numRows;i++)
            result+=rows[i];
        return result;
    }
};