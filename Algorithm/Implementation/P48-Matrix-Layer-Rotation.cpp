#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int M, N, R;
    cin >> M >> N >> R;
    vector<vector<int> > matrix(M, vector<int>(N, 0));
    for(int i = 0; i < M; ++i){
        for(int j = 0; j < N; ++j){
            cin >> matrix[i][j];
        }
    }
    int round = M > N ? N : M;
    round /= 2;
    for(int i = 0; i < round; ++i){
        int len = 2 * N + 2 * M - 4 - 8 * i;
        int shift = R % len;
        vector<int> nums;
        //left->right
        for(int col = i; col <= N - 1 - i; ++col){
            nums.push_back(matrix[i][col]);
        }
        //top->down
        for(int row = i + 1; row < M - 1 - i; ++row){
            nums.push_back(matrix[row][N - 1 - i]);
        }
        //right->left
        for(int col = N - 1 - i; col >= i; --col){
            nums.push_back(matrix[M - 1 - i][col]);
        }
        //down->top
        for(int row = M - i - 2; row > i; --row){
            nums.push_back(matrix[row][i]);
        }
        //fill
        //left->right
        int index = shift;
        for(int col = i; col <= N - 1 - i; ++col, ++index){
            int shiftIndex = index;
            if(shiftIndex >= len){ shiftIndex %= len; }
            matrix[i][col] = nums[shiftIndex];
        }
        //top->down
        for(int row = i + 1; row < M - 1 - i; ++row, ++index){
            int shiftIndex = index;
            if(shiftIndex >= len){ shiftIndex %= len; }
            matrix[row][N - 1 - i] = nums[shiftIndex];
        }
        //right->left
        for(int col = N - 1 - i; col >= i; --col, ++index){
            int shiftIndex = index;
            if(shiftIndex >= len){ shiftIndex %= len; }
            matrix[M - 1 - i][col] = nums[shiftIndex];
        }
        //down->top
        for(int row = M - i - 2; row > i; --row, ++index){
            int shiftIndex = index;
            if(shiftIndex >= len){ shiftIndex %= len; }
            matrix[row][i] = nums[shiftIndex];
        }
    }
     for(int i = 0; i < M; ++i){
        for(int j = 0; j < N; ++j){
            cout << matrix[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}