class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<char>>&board,
        int drow[],int dcol[],int n,int m){
            vis[row][col]=1;
            for(int i=0;i<4;i++){
                int nrow=row+drow[i];
                int ncol = col+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]
                    && board[nrow][ncol]=='O'){
                        dfs(nrow,ncol,vis,board,drow,dcol,n,m);
                    }
            }
        }
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0||j==0||i==n-1||j==m-1){
                    if(board[i][j]=='O'){
                        dfs(i,j,vis,board,drow,dcol,n,m);
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
    }
};