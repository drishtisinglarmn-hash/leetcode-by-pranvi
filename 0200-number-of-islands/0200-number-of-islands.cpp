class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int count=0;
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    q.push({i,j});
                    grid[i][j]='0';

                    int dx[]={-1,0,1,0};
                    int dy[]={0,1,0,-1};

                    while(!q.empty()){
                        auto [x, y] = q.front();
                         q.pop();

                        for(int k=0;k<4;k++){
                            int nx=x+dx[k];
                            int ny=y+dy[k];

                            if(nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]=='1'){
                                grid[nx][ny]='0';
                                q.push({nx,ny});
                            }
                        }

                    }
                }
            }
        }

    return count;
        
    }
};