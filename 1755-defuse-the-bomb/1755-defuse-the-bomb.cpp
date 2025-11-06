class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> result;
        int size=code.size();
        if(k == 0){
            vector<int> result(size,0);
            return result;
        }
        else{
            int absK=abs(k),sum=0, start= k > 0 ? 1 : size-absK,end=start+absK-1;
            for(int i=start;i<=end;i++) sum+=code[i];
            result.push_back(sum);
            while(result.size() != code.size()){
                sum-=code[start % size];
                start++,end++;
                sum+=code[end % size];
                result.push_back(sum);
            }
        }


        // else if(k > 0){
        //     int sum=0, start=1,end=start+k-1;
        //     for(int i=start;i<=end;i++) sum+=code[i];
        //     result.push_back(sum);
        //     while(result.size() != code.size()){
        //         sum-=code[start % size];
        //         start++,end++;
        //         sum+=code[end % size];
        //         result.push_back(sum);
        //     }
        // }
        //     else{
        //         int sum=0, start=size-abs(k),end=start+abs(k)-1;
        //         for(int i=start;i<=end;i++) sum+=code[i];
        //         result.push_back(sum);
        //         while(result.size() != code.size()){
        //             sum-=code[start % size];
        //             start++,end++;
        //             sum+=code[end % size];
        //             result.push_back(sum);
        //     }
        return result;
    }
};