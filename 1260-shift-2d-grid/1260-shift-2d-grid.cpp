class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>res;
        vector<int>result;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                res.push_back(grid[i][j]);
            }
        }
        int n = res.size();
        k %= n;
        for(int i=res.size()-k;i<res.size();i++){
            result.push_back(res[i]);
        }
        for(int i=0;i<res.size()-k;i++){
            result.push_back(res[i]);
        }
        int count =0;
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                grid[i][j] = result[count];
                count++;
    }
}
    return grid;
    }
};