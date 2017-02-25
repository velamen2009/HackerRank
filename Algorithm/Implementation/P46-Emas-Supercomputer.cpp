#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isValid(vector<string>& grid, int N, int M, int centerX1, int centerY1, int len){
    return ((centerX1 - len >= 0) && (centerX1 + len <N) && (centerY1 - len >= 0) && (centerY1 + len < M)
            && (grid[centerX1 - len][centerY1] == 'G')
            && (grid[centerX1 + len][centerY1] == 'G')
            && (grid[centerX1][centerY1 - len] == 'G')
            && (grid[centerX1][centerY1 + len] == 'G')
           );
}

bool isOverlape(vector<string>& grid, int N, int M, int centerX1, int centerY1, int len1, int centerX2, int centerY2, int len2){
    vector<vector<bool>> vis(N, vector<bool>(M, false));
    for(int k = 0; k < len1; ++k){
        vis[centerX1 - k][centerY1] = true;
        vis[centerX1 + k][centerY1] = true;
        vis[centerX1][centerY1 - k] = true;
        vis[centerX1][centerY1 + k] = true;
    }
    for(int k = 0; k < len2; ++k){
        if(vis[centerX2 - k][centerY2] == true) return true;
        if(vis[centerX2 + k][centerY2] == true) return true;
        if(vis[centerX2][centerY2 - k] == true) return true;
        if(vis[centerX2][centerY2 + k] == true) return true;
    }
    return false;
}

int getMaxLen(vector<string>& grid, int N, int M, int centerX1, int centerY1, int len1, int centerX2, int centerY2){
    int len2 = 1;
    while(isValid(grid, N, M, centerX2, centerY2, len2) && !isOverlape(grid, N, M, centerX1, centerY1, len1, centerX2, centerY2, len2 + 1)){
        ++len2;
    }
    return len2;
}

int maxCross(vector<string>& grid, int N, int M, int centerX1, int centerY1, int centerX2, int centerY2){
    int len = 1, max = 0;
    if(grid[centerX1][centerY1] == 'B' || grid[centerX2][centerY2] == 'B'){
        return 0;
    }
    while(isValid(grid, N, M, centerX1, centerY1, len - 1)){
        int maxLen = getMaxLen(grid, N, M, centerX1, centerY1, len, centerX2, centerY2);
        if(maxLen == 0){
            break;
        }
        int area = (4 *len - 3) * (4 * maxLen - 3);
        max = area > max ? area : max;
        len += 1;
    }
    return max;
}

int getMax(vector<string>& grid, int N, int M, int centerX, int centerY){
    int max = 0;
    for(int i = centerY + 1; i < M; ++i){
        int area = maxCross(grid, N, M, centerX, centerY, centerX, i);
        max = area > max ? area : max;
    }
    for(int i = centerX + 1; i < N; ++i){
        for(int j = 0; j < M; ++j){
            int area = maxCross(grid, N, M, centerX, centerY, i, j);
            max = area > max ? area : max;
        }
    }
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M;
    cin >> N >> M;
    vector<string> grid;
    for(int i = 0; i < N; ++i){
        string s;
        cin >> s;
        grid.push_back(s);
    }
    int max = 0;
    for(int i = 0; i != N; ++i){
        for(int j = 0; j != M; ++j){
            if(grid[i][j] == 'G'){
                int area = getMax(grid, N, M, i, j);
                max = area > max ? area : max;
            }
        }
    }
    cout << max << endl;
    return 0;
}