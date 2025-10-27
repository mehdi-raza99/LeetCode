class Solution {
public:
    int m,n;
    bool find(vector<vector<char>>& board, int i, int j, int idx, string word){
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[idx])
            return false;

        if (idx == word.size() - 1)
            return true;

        char temp=board[i][j];
        board[i][j]='!';

        bool check=find(board, i+1, j, idx+1, word) || find(board, i-1, j, idx+1, word) || find(board, i, j+1, idx+1, word) || find(board, i, j-1, idx+1, word);
        board[i][j]=temp;
        return check;
    }
    bool exist(vector<vector<char>>& board, string word) {
       m=board.size(),n=board[0].size();
       for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == word[0] && find(board,i,j,0,word)) //Check wether we can find combination
                        return true;
                }
            }
       return false;
       }
};
