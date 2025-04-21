class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                for(int k=0;k<grid.size();k++){
                    if(grid[i][k] != grid [k][j])
                        break;
                    if(k == grid.size()-1)
                        count++;
                }
            }
        }
        return count;
    }
};