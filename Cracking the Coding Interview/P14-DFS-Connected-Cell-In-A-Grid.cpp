#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int x[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool valid(int m, int n, int row, int col){
    if(row < 0 || col < 0 || row >= m || col >= n){
        return false;
    }
    return true;
}

void getCurrent(vector<vector<int>>& grid, vector<vector<int>>& vis, int m, int n, int row, int col, int& t){
    for(int i = 0; i < 8; ++i){
        int nx = row + x[i], ny = col + y[i];
        if(valid(m, n, nx, ny) && 1 == grid[nx][ny] && 0 == vis[nx][ny]){
            t += 1;
            vis[nx][ny] = 1;
            getCurrent(grid, vis, m, n, nx, ny, t);
        }
    } 
}

int get_biggest_region(vector<vector<int>> grid) {
    int max = 0, m = grid.size(), n = grid[0].size();
    vector<vector<int>> vis(m, vector<int>(n));
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(0 == vis[i][j] && 1 == grid[i][j]){
                vis[i][j] = 1;
                int t = 1;
                getCurrent(grid, vis, m, n, i, j, t);
                max = max > t ? max : t;
            }
        }
    }
    return max;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector< vector<int> > grid(n,vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << get_biggest_region(grid) << endl;
    return 0;
}