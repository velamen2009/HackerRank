#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a, b;
    cin >> a;
    cin >> b;
    int len = a.size() + 1;
    vector<int> dp(len + 1);
    for(int row = 1; row < len; ++row){
        int previous = 0, current = 0;
        for(int col = 1; col < len; ++col){
            if(b[row - 1] == a[col - 1]){
                current = dp[col - 1] + 1;
            }
            else{
                current = max(previous, dp[col]);
            }
            dp[col - 1] = previous;
            previous = current;
        }
        dp[len] = previous;
    }
    cout << dp[len] << endl;
    return 0;
}