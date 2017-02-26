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

long g(long x){
    long long a = x % 8;
    if(a == 0 || a == 1) return x;
    if(a == 2 || a == 3) return 2;
    if(a == 4 || a == 5) return x+2;
    if(a == 6 || a == 7) return 0;
    return 0;
}

int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        long L;
        long R;
        cin >> L >> R;
        long ans = g(R) ^ g(L - 1);
        cout << ans << endl;
    }
    return 0;
}