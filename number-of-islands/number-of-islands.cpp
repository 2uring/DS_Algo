class Solution {
    void bfs(int r, int c, vector<vector <char>> g, set<pair<int, int>>& v)
    {
        int m = g.size();
        int n = g[0].size();
        int nr, nc;
        queue<pair<int, int>> q;
        v.insert({r, c});
        q.push({r, c});
        pair<int, int> x;
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
        while(q.size())
        {
            x = q.front();
            q.pop();
            for(pair<int, int> p: directions)
            {
                nr = x.first + p.first;
                nc = x.second + p.second;
                if( nr >= 0 and nr < m and nc >=0 and nc <n and g[nr][nc] == '1' and v.find({nr, nc}) == v.end())
                {
                    q.push({nr, nc});
                    v.insert({nr, nc});
                    
                }
            }
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        set<pair<int, int>> visited;
        int islands = 0;
        for(int r = 0 ; r < m; r++)
        {
            for(int c = 0; c<n; c++)
            {
                if(grid[r][c] == '1' and visited.find({r, c}) == visited.end())
                {
                    bfs(r, c, grid, visited);
                    islands++;
                    
                    
                }
            }
        }
        
        return islands;
        
    }
};