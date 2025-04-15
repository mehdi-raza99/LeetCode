class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxGain=0,currentAltitude=0,size=gain.size();
        for(int i=0;i<size;i++){
            currentAltitude+=gain[i];
            if(maxGain < currentAltitude)
                maxGain=currentAltitude;
        }
        return maxGain;
    }
};