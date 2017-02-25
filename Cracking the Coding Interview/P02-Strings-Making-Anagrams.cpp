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

int number_needed(string a, string b) {
    vector<int> dict(26);
    for(int i = 0; i < a.size(); ++i){
        dict[int(a[i]) - 97]++;
    }
    for(int j = 0; j < b.size(); ++j){
        dict[int(b[j]) - 97]--;
    }
    int ans = 0;
    for(int k = 0; k < dict.size(); ++k){
        ans += abs(dict[k]);
    }
    return ans;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}