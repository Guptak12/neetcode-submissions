class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,pair<int,int>>> q;

        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2)q.push({0,{i,j}});
            }
        }
        vector<int> rs = {-1,0,1,0};
        vector<int> rc = {0,1,0,-1};

        int ans=0;

        while(!q.empty()){
            int s = q.size();
            for(int i=0;i<s;i++){
                auto [r,c] = q.front().second;
                int d = q.front().first;
                ans=max(ans,d);
                q.pop();

                for(int j=0;j<4;j++){
                    int x = r+rs[j];
                    int y = c+rc[j];

                    if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]==1){
                        grid[x][y]=2;
                        q.push({d+1,{x,y}});
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1)return -1;
            }
        }
        return ans;
    }
};
