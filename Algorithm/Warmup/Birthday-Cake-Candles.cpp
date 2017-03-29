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


int main(){
    int n, x;
    int max = -1;
    int cnt = 0;
    cin >> n;
    for(int height_i = 0;height_i < n;height_i++){
        cin >> x;
        if(x > max){
            max = x;
            cnt = 1;
        }
        else if(x == max){
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}

