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
    int n;
    int k;
    int x;
    int max = 0;
    cin >> n >> k;
    for(int height_i = 0; height_i < n; height_i++){
        cin >> x;
        if(x > k){
            max = max > x ? max : x;
        }
    }
    cout << (0 == max ? 0 : max - k) << endl;
    // your code goes here
    return 0;
}

