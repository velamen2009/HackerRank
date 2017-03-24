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
    cin >> n;
    vector<int> a(100);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> x;
        a[x]++;
    }
    int ans = a[1] + a[2];
    for(int i = 3; i < 100; ++i){
        int temp = a[i] + a[i - 1];
        ans = ans > temp ? ans : temp;
    }
    cout << ans << endl;
    return 0;
}
