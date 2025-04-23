class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int m=maze.size(),n=maze[0].size(),totalSteps=0;
        vector<vector<int>> directions {{0,1},{1,0},{-1,0},{0,-1}};
        queue<pair<int,int>> que;
        que.push({entrance[0],entrance[1]});
        maze[entrance[0]][entrance[1]]='+';
        while(!que.empty()){
            int size=que.size();
            while(size--){
                pair<int,int> temp=que.front();
                que.pop();
                int i=temp.first;
                int j=temp.second;
                if(temp != make_pair(entrance[0],entrance[1]) && (i == 0 || i == m-1 || j == 0 || j == n-1))
                    return totalSteps;
                for(auto& dir:directions){
                    int next_row=i+dir[0];
                    int next_col=j+dir[1];
                    if(next_row >= 0 && next_row < m && next_col >= 0 && next_col < n && maze[next_row][next_col] != '+'){
                        que.push(make_pair(next_row,next_col));
                        maze[next_row][next_col] = '+';
                    }
                }
            }
            totalSteps++;
        }
        return -1;
    }
};