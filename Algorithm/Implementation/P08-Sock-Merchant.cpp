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
    vector<int> c(n);
    map<int, int> colors;
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
       if(colors.find(c[c_i]) != colors.end()){
           colors[c[c_i]]++;
       }
       else{
           colors[c[c_i]] = 1;
       }
    }
    int count = 0;
    for(map<int, int>::iterator it = colors.begin(); it != colors.end(); ++it){
        count += it->second/2;
    }
    cout<<count<<endl;
    return 0;
}