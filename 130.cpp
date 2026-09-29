#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    void dfs(std::vector<std::vector<char>>& grid, int r, int c) {
        int m = grid.size();
        int n = grid[0].size();
        
        if (r < 0 || c < 0 || r >= m || c >= n || grid[r][c] != '1') {
            return;
        }
        
        grid[r][c] = '0';
        
        dfs(grid, r + 1, c);
        dfs(grid, r - 1, c);
        dfs(grid, r, c + 1);
        dfs(grid, r, c - 1);
    }

    int numIslands(std::vector<std::vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int m = grid.size();
        int n = grid[0].size();
        int count = 0;
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    ++count;
                    dfs(grid, i, j);
                }
            }
        }
        
        return count;
    }
};

int main() {
    
    return 0;
}