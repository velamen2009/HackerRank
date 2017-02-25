#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void bomb(vector<string>& grid, int row, int col){
    int x[4] = {-1, 0, 0 , 1};
    int y[4] = {0, -1, 1, 0};
    vector<vector<bool>> vis(row, vector<bool>(col, false));
    
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            if('O' == grid[i][j] && false == vis[i][j]){
                vis[i][j] = true;
                for(int k = 0; k < 4; ++k){
                    int nx = i + x[k];
                    int ny = j + y[k];
                    if(nx >=0 && nx < row && ny >=0 && ny < col && false == vis[nx][ny] && '.' == grid[nx][ny]){
                        grid[nx][ny] = 'O';
                        vis[nx][ny] = true;
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < row; ++i){
        for(int j = 0; j < col; ++j){
            if('O' == grid[i][j]){
                grid[i][j] = '.';
            }
            else{
                grid[i][j] = 'O';
            }
        }
    }
}

void getGrid(vector<string>& grid, int row, int col, int n){
    bomb(grid, row, col);
    if(0 != (n - 3) % 4){
        bomb(grid, row, col);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int row, col, n;
    string s;
    cin >> row >> col >> n;
    vector<string> grid;
    
    for(int i = 0; i != row; ++i){
        cin >> s;
        grid.push_back(s);
    }
    // A -> B -> C -> B -> D -> B -> C -> B-> D -> B -> C
    // A: initial
    // B: full
    // C: first explode
    // D: after second explode
    
     if(n % 2 == 0){
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                cout << 'O';
            }
            cout << endl;
        }
    }
    else if(n == 1){
        for(int i = 0; i < row; ++i){
            cout << grid[i] << endl;
        }
    }
    else{
        getGrid(grid, row, col, n);
        for(int i = 0; i < row; ++i){
            cout << grid[i] << endl;
        }
    }

    return 0;
}