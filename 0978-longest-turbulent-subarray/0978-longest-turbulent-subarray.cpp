class Solution { 
public: 
    
    int maxTurbulenceSize(vector<int>& arr) { 
        int n=arr.size();
        if(n<2) return n;

        int left=0,longestSubarray=1;
        for(int right=1;right<n;right++){
            int cmp=arr[right] > arr[right-1] ? 1 : 
                arr[right] < arr[right-1] ? -1 : 0;

            if(cmp == 0){
                left=right;
            }
            else if(right > 1){
                int prevCmp=arr[right-1] > arr[right-2] ? 1 : 
                arr[right-1] < arr[right-2] ? -1 : 0;

                if(prevCmp == cmp)  left=right-1;
            }
            longestSubarray=max(longestSubarray,right-left+1);
        }
        return longestSubarray;
    } 
};