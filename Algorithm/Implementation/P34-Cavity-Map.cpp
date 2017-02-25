#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    int x[] = {1, -1, 0, 0};
    int y[] = {0, 0, 1, -1};
    for(int i = 1; i < n - 1; ++i){
        for(int j = 1; j < n - 1; ++j){
            if(grid[i + x[0]][j + y[0]] != 'X' && grid[i + x[0]][j + y[0]] < grid[i][j]
              && grid[i + x[1]][j + y[1]] != 'X' && grid[i + x[1]][j + y[1]] < grid[i][j]
              && grid[i + x[2]][j + y[2]] != 'X' && grid[i + x[2]][j + y[2]] < grid[i][j]
              && grid[i + x[3]][j + y[3]] != 'X' && grid[i + x[3]][j + y[3]] < grid[i][j]
              )
            {
                grid[i][j] = 'X';
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}