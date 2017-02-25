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
    long long t;
    cin >> t;
    int count = 0;
    long long init = 3;
    while(count + init < t){
        count += init;
        init *= 2;
    }
    t -= count;
    while(--t > 0){
        init--;
    }
    cout<<init<<endl;
    return 0;
}