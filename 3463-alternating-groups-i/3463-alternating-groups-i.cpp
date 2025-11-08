class Solution {
public: //010101
    int numberOfAlternatingGroups(vector<int>& colors) {
        int size=colors.size(),start=0,end=0,result=0;
        while(start < size){
            if(colors[end % size] != colors[(end+1) % size])
                end++;
            else
                start=++end;
            if(end-start+1 == 3){
                start++;
                result++;
            }
        }
        return result;
    }
};