#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxof4(int a, int b, int c, int d){
    int max1 = max(a, b);
    int max2 = max(c, d);
    return max(max1, max2);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    for(int i = 0; i < q; ++i){
        int n;
        cin >> n;
        vector<vector<int> > matrix(2 * n, vector<int>(2 * n, 0));
        for(int k = 0; k < 2 * n; ++k){
            for(int j = 0; j < 2 * n; ++j){
                cin >> matrix[k][j];
            }
        }
        int sum = 0;
        for(int r = 0; r < n; ++r){
            for(int c = 0; c < n; ++c){
                sum += maxof4(matrix[r][c], matrix[r][2*n - c - 1], matrix[2*n - r - 1][c], matrix[2*n - r - 1][2*n - c - 1]);
                //cout << sum << endl;
            }
        }
        cout << sum << endl;
    }
    return 0;
}