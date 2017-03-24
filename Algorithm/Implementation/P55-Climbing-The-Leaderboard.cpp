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

int bin_search(vector<int>& scores, int x){
    int L = 0, R = scores.size();
    while(L < R){
        int mid = L + ((R - L) >> 1);
        if(scores[mid] == x){
            return mid + 1;
        }
        else if(scores[mid] > x){
            L = mid + 1;
        }
        else{
            R = mid;
        }
    }
    return L + 1;
}

int main(){
    int n, x;
    cin >> n;
    vector<int> scores;
    for(int scores_i = 0;scores_i < n;scores_i++){
        cin >> x;
        if(scores.empty() || scores[scores.size() - 1] != x){
            scores.push_back(x);
        }
    }
    
    int m;
    cin >> m;
    for(int alice_i = 0;alice_i < m;alice_i++){
        cin >> x;
        cout << bin_search(scores, x) << endl;
    }
    // your code goes here
    return 0;
}
