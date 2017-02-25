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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int sum = -100;
    int x[6] = {-1, -1, -1, 1, 1, 1};
    int y[6] = {-1, 0, 1, -1, 0, 1};
    for(int i = 1; i < 5; ++i){
        for(int j = 1; j < 5; ++j){
            int max = arr[i][j];
            for(int k = 0; k < 6; ++k){
                max += arr[i + x[k]][j + y[k]];
            }
            sum = sum > max ? sum : max;
        }
    }
    cout << sum << endl;
    return 0;
}