nclude <map>
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

int count(int x, int y, vector<vector<int>>& board, int n, int r, int c){
    int ans = 0;
    while(r + y >= 1 && r + y <= n && c + x >= 1 && c + x <= n && board[r + y][c + x] == 0){
        r += y;
        c += x;
        ++ans;
    }
    return ans;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<vector<int>> board(3, vector<int>(3));
    int rQueen;
    int cQueen;
    cin >> rQueen >> cQueen;
    board[0][0] = min(n - rQueen, cQueen - 1);
    board[0][1] = n - rQueen;
    board[0][2] = min(n - rQueen, n - cQueen);
    board[1][0] = cQueen - 1;
    board[1][2] = n - cQueen;
    board[2][0] = min(rQueen - 1, cQueen - 1);
    board[2][1] = rQueen - 1;
    board[2][2] = min(rQueen - 1, n - cQueen);
    for(int a0 = 0; a0 < k; a0++){
        int rObstacle;
        int cObstacle;
        cin >> rObstacle >> cObstacle;
        // your code goes here
        if(rObstacle == rQueen || cObstacle == cQueen || abs(rObstacle - rQueen) == abs(cObstacle - cQueen)){
            int signR = rObstacle - rQueen == 0 ? 0 : (rObstacle - rQueen > 0 ? -1 : 1);
            int signC = cObstacle - cQueen == 0 ? 0 : (cObstacle - cQueen > 0 ? 1 : -1);
            int temp = 0;
            if(0 == signR){
                temp = abs(cObstacle - cQueen) - 1;
            }
            else{
                temp = abs(rObstacle - rQueen) - 1;
            }
            board[1 + signR][1 + signC] = temp < board[1 + signR][1 + signC] ? temp : board[1 + signR][1 + signC];
        }
    }
    //int x[] = {0, 1, 1, 1, 0, -1, -1, -1};
    //int y[] = {1, 1, 0, -1, -1, -1, 0, 1};
    int ans = 0;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            ans += board[i][j];
        }
    }
    cout << ans << endl;
    return 0;
}
