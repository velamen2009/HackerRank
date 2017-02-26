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
    string S;
    cin >> S;
    int ans = 0;
    for(int i = 0; i < S.size(); i += 3){
        if('S' != S[i]){
            ++ans;
        }
        if('O' != S[i + 1]){
            ++ans;
        }
        if('S' != S[i + 2]){
            ++ans;
        }
    }
    cout << ans << endl;
    return 0;
}