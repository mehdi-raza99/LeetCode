class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int flowersPlaced=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0){
                if(i == 0 && (i == flowerbed.size()-1 || flowerbed[i+1] == 0) ){
                    flowerbed[i++]=1;
                    flowersPlaced++;
                }
                else if(i == flowerbed.size()-1 && flowerbed[i-1] == 0)
                    flowersPlaced++;
                else{
                    if(flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                        flowerbed[i++]=1;
                        flowersPlaced++;
                    }
                }
            }
        }
        return n==flowersPlaced?true:false;
    }
};