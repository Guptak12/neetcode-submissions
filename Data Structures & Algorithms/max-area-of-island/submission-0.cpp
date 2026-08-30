class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
    
        vector<vector<int>> vis(m,vector<int> (n,0));

        int ans = 0;
        vector<int> dr = {0,1,0,-1};
        vector<int> dc = {1,0,-1,0};

        queue<pair<int,int>> q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int tmp =0;
                if(grid[i][j]==1&&vis[i][j]==0){
                    q.push({i,j});
                }
                while(!q.empty()){
                    auto p =q.front();
                    int r = p.first;
                    int c = p.second;
                    q.pop();
                    vis[r][c]=1;
                    tmp++;
                    for(int k=0;k<4;k++){
                        int x = r + dr[k];
                        int y = c + dc[k];
                        if(x>=0&&x<m&&y>=0&&y<n&&grid[x][y]==1&&vis[x][y]==0){
                            q.push({x,y});
                            vis[x][y]=1;
                        }
                    }

                }

                ans=max(tmp,ans);
            }
        }

        return ans;
    }
};
