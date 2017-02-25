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
    int n, max = 0, cnt = 0;
    cin >> n;
    for(int i = 0; i < 32; ++i){
        if((n >> i) & 1 == 1){
            ++cnt;
        }
        else{
            max = max > cnt ? max : cnt;
            cnt = 0;
        }
    }
    cout << max << endl;
    return 0;
}