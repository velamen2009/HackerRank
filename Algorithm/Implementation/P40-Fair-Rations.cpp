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
    int N;
    cin >> N;
    vector<int> B(N);
    vector<int> index;
    for(int B_i = 0;B_i < N;B_i++){
       cin >> B[B_i];
       if(0 != B[B_i] % 2){
           index.push_back(B_i);
       }
    }
    if(0 != index.size() % 2){
        cout << "NO" << endl;
        return 0;
    }
    int sum = 0;
    for(int i = 0; i < index.size(); i += 2){
        sum += (index[i + 1] - index[i]) * 2;
    }
    cout << sum << endl;
    return 0;
}