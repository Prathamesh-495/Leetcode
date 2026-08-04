class Solution {
private:
    void dfs(int sr,int sc,vector<vector<int>>& ans,vector<vector<int>>& image,
        int color,int drow[],int dcol[],int iniCol){
            ans[sr][sc] = color;
            int n = image.size();
            int m = image[0].size();
            for(int i=0;i<4;i++){
                int nrow = sr+drow[i];
                int ncol = sc+dcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniCol
                    && ans[nrow][ncol]!=color){
                        dfs(nrow,ncol,ans,image,color,drow,dcol,iniCol);
                    }
            }
        }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniCol = image[sr][sc];
        vector<vector<int>>ans = image;
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,1,0,-1};
        dfs(sr,sc,ans,image,color,drow,dcol,iniCol);
        return ans;
        
    }
};