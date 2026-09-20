class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;

        int n = grid.size();
        int m = grid[0].size();
        int fresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push({i,j});
                else if(grid[i][j]==1)fresh++;
            }
        }
        vector<int> rs = {-1,0,1,0};
        vector<int> rc = {0,1,0,-1};
        if(fresh==0) return 0;

        int ans=0;

        while(!q.empty()&&fresh>0){
            int s = q.size();
            ans++;
            for(int i=0;i<s;i++){
                auto [r,c] = q.front();
                q.pop();

                for(int j=0;j<4;j++){
                    int x = r+rs[j];
                    int y = c+rc[j];

                    if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]==1){
                        grid[x][y]=2;
                        fresh--;
                        q.push({x,y});
                    }
                }
            }
        }

        if(fresh>0) return -1;
        return ans;
    }
};
