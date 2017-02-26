#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int x[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int y[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void findConnectedCells(vector<vector<char>>& grid, vector<vector<bool>>& vis, int n, int m, int i, int j, int& area){
    for(int k = 0; k < 8; ++k){
        int nx = i + x[k], ny = j + y[k];
        if(nx >=0 && nx < n && ny >=0 && ny < m && grid[nx][ny] == '1' && vis[nx][ny] == false){
            area += 1;
            vis[nx][ny] = true;
            findConnectedCells(grid, vis, n, m, nx, ny, area);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, m, max = 0;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m, '0'));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    for(int i = 0; i != n; ++i){
        for(int j = 0; j != m; ++j){
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i != n; ++i){
        for(int j = 0; j != m; ++j){
            if(grid[i][j] == '1' && vis[i][j] == false){
                int area = 1;
                vis[i][j] = true;
                findConnectedCells(grid, vis, n, m, i, j, area);
                max = area > max ? area : max;
            }
        }
    }
    cout << max << endl;
    return 0;
}