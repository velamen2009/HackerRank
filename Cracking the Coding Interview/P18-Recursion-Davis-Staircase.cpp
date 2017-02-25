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

int f(int n){
    vector<int> dp(n + 1);
    dp[0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= 3; ++j){
            if(i - j >= 0){
                dp[i] += dp[i - j];
            }
        }
    }
    return dp[n];
}

int main(){
    int s;
    cin >> s;
    for(int a0 = 0; a0 < s; a0++){
        int n;
        cin >> n;
        cout << f(n) << endl;
    }
    return 0;
}