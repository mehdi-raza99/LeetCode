class Solution {
public:
    void dfs(vector<vector<int>>& rooms,int room,vector<bool>& visit){
        for(int j=0;j<rooms[room].size();j++){
            int key=rooms[room][j];
            if (!visit[key]) {
                visit[key] = true;
                dfs(rooms, key, visit);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> visit(n,0); //room we can visit
        visit[0]=true;
        dfs(rooms,0,visit);
        for(int i=0;i<n;i++){
            if(!visit[i])
                return false;
        }
        return true;
    }
};