class Solution {
public:
    int mySqrt(int x) {
        int left=0,right=x;
        while(left <= right){
            long long mid=left + (right-left)/2;
            long long result=mid*mid;
            if(result < x) left=mid+1;
            else if(result > x)    right=mid-1;
            else return mid;
        }
        return right;
    }
};