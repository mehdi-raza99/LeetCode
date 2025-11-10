class Solution {
public:
    int findDist(int a, int b){
        return abs(a-b);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> result;
        int size=arr.size();
        result.push_back(arr[0]);
        for(int i=1;i<size;i++){
            if(result.size() == k){
                if(findDist(result[0],x) > findDist(arr[i],x)){
                    result.erase(result.begin());
                    result.push_back(arr[i]);
                }
            }
            else{
                result.push_back(arr[i]);
            }
        }
        return result;
    }
};