class Solution {
public:


    void validIp(string& s,int index, string currStr, int countOfDots,vector<string>& result){
        if(countOfDots == 4 && index == s.length()){
            currStr.pop_back();
            result.push_back(currStr);
            return;
        }
        if(countOfDots == 4 || index == s.length()) return;
        
        for(int len=1;len<=3 && len+index <= s.length();len++){
            string segment=s.substr(index,len);
            if((segment[0] == '0' && segment.length() > 1)  ||
                stoi(segment) > 255) continue;
            validIp(s,index+len,currStr+segment+'.',countOfDots+1,result);
        }
    }

    vector<string> restoreIpAddresses(string s) {
        vector<string> result;
        validIp(s,0,"",0,result);
        return result;
    }
};