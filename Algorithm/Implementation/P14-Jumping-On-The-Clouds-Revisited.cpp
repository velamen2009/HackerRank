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
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    int s = 0, e = 100;
    for(int m = k; m <= n; m += k){
        e -= 1;
        if(m == n){
            if(1 == c[0]){
                e -= 2;
            }
        }
        else{
             if(1 == c[m]){
                e -= 2;
            }
        }
    }
    cout<<e<<endl;
    return 0;
}