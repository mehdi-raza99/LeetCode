class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        map<vector<int>,int> rows;
        for(auto i: grid)
            rows[i]++;
        
        for(int i=0;i<grid.size();i++){
            vector<int> column;
            for(int j=0;j<grid.size();j++){
                column.push_back(grid[j][i]);
            }
            count+=rows[column];
        }
        return count;
    }
};