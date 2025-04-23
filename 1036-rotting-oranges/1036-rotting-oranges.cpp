class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int freshOranges=0,totalMinutes=0;
        int m=grid.size(),n=grid[0].size();
        queue<pair<int, int>> que;
        vector<vector<int>> directions {{0,1},{1,0},{-1,0},{0,-1}};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1)
                    freshOranges++; //Fresh Oranges count
                if(grid[i][j] == 2)
                    que.push({i,j});
            }
        }
        while(!que.empty()  && freshOranges > 0){
            int size=que.size();
            while(size--){
                pair<int,int> temp=que.front();
                que.pop();
                int i=temp.first;
                int j=temp.second;
                for(auto& dir:directions){
                    int nextOrangeRow=i+dir[0];
                    int nextOrangeCol=j+dir[1];
                    if(nextOrangeRow >= 0 && nextOrangeRow < m && nextOrangeCol >= 0 && nextOrangeCol < n && grid[nextOrangeRow][nextOrangeCol] == 1){
                        grid[nextOrangeRow][nextOrangeCol] = 2;
                        freshOranges--;
                        que.push({nextOrangeRow,nextOrangeCol});
                    }
                }
            }
            totalMinutes++;
        }
        return freshOranges == 0 ? totalMinutes : -1;
    }
};