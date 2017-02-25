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
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    sort(c.begin(), c.end());
    vector<int> ans(n);
    int max = 0;
    int temp = c[0] - 0;
    max = max > temp ? max : temp;
    for(int i = 0; i < m; ++i){
        if (m - 1 == i){
            int temp = n - 1 - c[m - 1];
            max = max > temp ? max : temp;
        }
        else{
            int mid = (c[i] + c[i + 1]) >> 1;
            int temp = mid - c[i];
            max = max > temp ? max : temp;
        }
    }
    cout << max << endl;
    return 0;
}