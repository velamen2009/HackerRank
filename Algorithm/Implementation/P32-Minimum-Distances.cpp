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
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    unordered_map<int, vector<int>> dict;
    for(int i = 0; i <n; ++i){
        dict[A[i]].push_back(i);
    }
    int min_diff = n;
    for(unordered_map<int, vector<int>>::iterator it = dict.begin(); it != dict.end(); ++it){
        vector<int> index = it->second;
        if(index.size() > 1){
            for(int i = 0; i < index.size() - 1; ++i){
                int diff = index[i + 1] - index[i];
                if(diff < min_diff){
                    min_diff = diff;
                }
            }
        }
    }
    cout<< (n == min_diff ? -1 : min_diff) << endl;
    return 0;
}