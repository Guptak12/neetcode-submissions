class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
    
        queue<pair<int,int>> q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        vector<int> dr = {0,1,0,-1};
        vector<int> dc = {1,0,-1,0};

        while(!q.empty()){
            auto p = q.front();
            int r = p.first;
            int c = p.second;
            q.pop();
            for(int i=0;i<4;i++){
                int x = r+dr[i];
                int y = c + dc[i];
                if(x>=0&&x<m&&y>=0&&y<n&&grid[x][y]==2147483647){
                    grid[x][y]=grid[r][c]+1;
                    q.push({x,y});
                }
            }
        }
    }
};
