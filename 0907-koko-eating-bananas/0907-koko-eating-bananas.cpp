class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int size=piles.size(), max=*max_element(piles.begin(),piles.end());
        int left=1,right=max;
        while(left < right){
            int mid=(left+right)/2;
            int hours=0;
            for(int j=0;j<size;j++){
                if(piles[j]%mid == 0)
                    hours+=(piles[j]/mid);
                else
                    hours+=(piles[j]/mid)+1;
            }
            if(hours <= h)
                right=mid;
            else
                left=mid+1;
        }
        return left;
    }
};