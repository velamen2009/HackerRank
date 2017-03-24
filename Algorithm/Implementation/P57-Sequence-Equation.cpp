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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> num(n + 1);
    for(int i = 1; i <= n; ++i){
        cin >> num[i];
    }
    for(int i = 1; i <= n; ++i){
        int pos = find(num.begin(), num.end(), i) - num.begin();
        cout << find(num.begin(), num.end(), pos) - num.begin() << endl;
    }
    return 0;
}
