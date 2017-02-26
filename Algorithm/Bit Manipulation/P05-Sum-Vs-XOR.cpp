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


int main(){
    long n, ans = 0;
    int cnt0 = 0;
    cin >> n;
    while(n > 0){
        int t = n & 1;
        if(t == 0){
            ++cnt0;
        }
        n >>= 1;
    }
    ans = pow(2, cnt0);
    cout << ans << endl;
    return 0;
}