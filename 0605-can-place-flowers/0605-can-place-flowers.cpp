class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int emptyPlace=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)){
                emptyPlace++;
                flowerbed[i++]=1;
            }
        }
        return n<=emptyPlace?true:false;
    }
};