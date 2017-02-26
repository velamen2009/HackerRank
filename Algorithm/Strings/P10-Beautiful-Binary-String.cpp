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
    string B;
    cin >> B;

    int cnt = 0, index = 0;
    size_t pos = B.find("010", index);
    while(string::npos != pos){
        ++cnt;
        index = pos + 3;
        pos = B.find("010", index);
    }
    cout << cnt << endl;
    return 0;
}