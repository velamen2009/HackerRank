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
    int k;
    cin >> n >> k;
    vector<int> x(n);
    for(int x_i = 0;x_i < n;x_i++){
       cin >> x[x_i];
    }
    sort(x.begin(), x.end());
    int cnt = 0;
    int index = 0;
    while(index < n){
        int next = x[index] + k;
        while(index + 1 < n && x[index + 1] <= next){
            ++index;
        }
        next = x[index] + k;
        while(index + 1 < n && x[index + 1] <= next){
            ++index;
        }
        ++cnt;
        ++index;
    }
    cout << cnt << endl;
    return 0;
}
