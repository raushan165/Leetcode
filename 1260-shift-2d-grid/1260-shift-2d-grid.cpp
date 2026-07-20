class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> res;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                res.push_back(grid[i][j]);
            }
        }
        int n = res.size();
        k %= n;
        vector<int> result;
        for(int i = n - k; i < n; i++) {
            result.push_back(res[i]);
        }
        for(int i = 0; i < n - k; i++) {
            result.push_back(res[i]);
        }
        int idx = 0;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                grid[i][j] = result[idx++];
            }
        }
        return grid;
    }
};