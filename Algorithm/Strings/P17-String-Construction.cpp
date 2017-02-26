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
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string s;
        cin >> s;
        vector<int> dict(26);
        int cost = 0;
        for(int i = 0; i < s.size(); ++i){
            if(0 == dict[int(s[i]) - 97]){
                ++cost;
            }
            dict[int(s[i]) - 97]++;
        }
        cout << cost << endl;
    }
    return 0;
}