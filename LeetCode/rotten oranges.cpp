class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        if (row == 1 && col == 1)
            return grid[0][0] == 1 ? -1:0;
            
        
        queue<pair<int, int>> rot_queue;
        vector<pair<int, int>> dirs = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        int total_count = 0;
        
        for (int i=0; i< row; i++) {
            for (int j=0; j<col; j++) {
                if (grid[i][j] == 2) {
                    rot_queue.emplace(i, j);
                }
                
                if (grid[i][j] != 0) {
                    total_count++;
                }
            }
        }
        
        int time = -1 ;
        int rot_count = 0;
        
        while(!rot_queue.empty()) {
            int size = rot_queue.size();
            rot_count += size;
            
            for (int i=0; i< size; i++) {
                int r = rot_queue.front().first;
                int c = rot_queue.front().second;
            
                rot_queue.pop();
            
                for(auto dir : dirs) {
                    int x = r + dir.first;
                    int y = c + dir.second;
                    
                    // out of boundary
                    if (x < 0 || y < 0 || x >= row || y >= col)
                        continue;
                    
                    if (grid[x][y] == 1) {
                        grid[x][y] = 2;
                        rot_queue.emplace(x, y);
                    }
                }                
            }

            time++;
        }
        
        return rot_count == total_count ? time : -1;
    }
};
