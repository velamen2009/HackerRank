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

int maxLen(string& s, char a, char b){
    int ans = 0;
    char init = '@';
    for(int i = 0; i < s.size(); ++i){
        if(a == s[i] || b == s[i]){
            if(s[i] == init){
                return 0;
            }
            else{
                ++ans;
                init = s[i];
            }
        }
    }
    return ans;
}

int main(){
    int len;
    cin >> len;
    string s;
    cin >> s;
    vector<int> dict(26);
    for(int i = 0; i < s.size(); ++i){
        int index = s[i] - 97;
        dict[index] += 1;
    }
    int ans = 0;
    for(int i = 0; i < 25; ++i){
        for(int j = i + 1; j < 26; ++j){
            if(0 != dict[i] && 0 != dict[j]){
                char a = char(i + 97), b = char(j + 97);
                int len = maxLen(s, a, b);
                ans = max(ans, len);
            }
        }
    }
    cout << ans << endl;
    return 0;
}