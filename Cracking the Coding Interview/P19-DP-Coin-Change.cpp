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

void solve(vector<int>& coins, int money, int index, int current, long long& ans){
    if(current == money){
        ++ans;
        return;
    }
    if(current < money){
        for(int i = index; i < coins.size(); ++i){
            if(current + coins[i] > money){
                return;
            }
            solve(coins, money, i, current + coins[i], ans);
        }
    }
}

long long make_change(vector<int>& coins, int money) {
    vector<long long> dp(money + 1);
    dp[0] = 1;
    for(int i = 0 ; i < coins.size(); ++i) {
        int coin = coins[i];
        for(int j = coin; j <= money; j++) {
            dp[j] += dp[j - coin];
        }
    }    
    return dp[money];
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> coins(m);
    for(int coins_i = 0;coins_i < m;coins_i++){
       cin >> coins[coins_i];
    }
    cout << make_change(coins, n) << endl;
    return 0;
}