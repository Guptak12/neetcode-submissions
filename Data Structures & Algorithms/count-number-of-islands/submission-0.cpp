class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int,int>> q;
        vector<vector<bool>> vis(m,vector<bool>(n,false));

        int ans=0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'&&!vis[i][j]){
                    q.push({i,j});
                    ans++;
                }
        vector<int> dir = {-1,0,1,0,-1};
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            int r = p.first;
            int c = p.second;


            vis[r][c]=true;

            for(int i=0;i<4;i++){
                int x = r+dir[i];
                int y = c+dir[i+1];
                if(x>=0&&x<m&&y>=0&&y<n&&grid[x][y]=='1'&&!vis[x][y]){
                    vis[x][y]=true;
                    q.push({x,y});
                }
            }
            
        }
            }
            }

        return ans;
    }
};
