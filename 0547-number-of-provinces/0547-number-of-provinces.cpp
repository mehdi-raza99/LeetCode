class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>& visited,int i){
        int n=isConnected.size();
        for(int j=0;j<n;j++){
            if(i!=j && isConnected[i][j] && !visited[j]){
                visited[j]=true;
                dfs(isConnected,visited,j);    
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),provinces=0;
        vector<bool> visited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                visited[i]=true;
                dfs(isConnected,visited,i);
                provinces++;
            }
        }
    return provinces;
    }
};