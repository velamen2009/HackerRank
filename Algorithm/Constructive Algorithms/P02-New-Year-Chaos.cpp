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
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        vector<int> q(n);
        for(int q_i = 0;q_i < n;q_i++){
           cin >> q[q_i];
        }
        // your code goes here
        int sum = 0;
        bool chaotic = false;
        for(int i = 0; i < n; ++i){
            int k = q[i] - i - 1;
            if(k > 2){
                chaotic = true;
                break;
            }
            else{
                for(int j = max(0, q[i] - 2); j < i; ++j){
                    if(q[j] > q[i]) ++sum;
                }
            }
        }
        if(chaotic == true){
            cout << "Too chaotic" << endl;
        }
        else{
            cout << sum << endl;
        }
    }
    return 0;
}