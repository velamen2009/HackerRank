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

vector<int> calcWeight(string& s){
    vector<int> ans;
    if(s.size() == 1){
        ans.push_back(s[0] - 96);
    }
    else{
        int L = 0, R = 1;
        while(R <= s.size()){
            if(s[L] == s[R]){
				ans.push_back((R - L) * (s[L] - 96));
                ++R;
            }
            else{
                ans.push_back((R - L) * (s[L] - 96));
                L = R;
                R += 1;
            }
        }
        //ans.push_back((R - L) * (s[L] - 96));
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    vector<int> weights = calcWeight(s);
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        // your code goes here
        if(weights.end() != find(weights.begin(), weights.end(), x)){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
