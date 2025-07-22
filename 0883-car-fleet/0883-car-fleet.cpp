class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> carsPositionWithSpeed;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            carsPositionWithSpeed.push_back({position[i],time});
        }

        sort(carsPositionWithSpeed.begin(),carsPositionWithSpeed.end()); //Sorting with position
        int n=carsPositionWithSpeed.size(),result=0;
        double maxTime=0;
        for(int i=n-1;i>=0;i--){
            if(maxTime < carsPositionWithSpeed[i].second){
                maxTime=carsPositionWithSpeed[i].second;
                result++;
            }
        }
        return result;
    }
};