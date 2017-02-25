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

void compare(int& a, int& b, int a0, int b0){
    if(a0 == b0){
        return;
    }
    else if(a0 > b0){
        a += 1;
    }
    else{
        b += 1;
    }
}

int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    int a = 0, b = 0;
    compare(a, b, a0, b0);
    compare(a, b, a1, b1);
    compare(a, b, a2, b2);
    cout<<a<<" "<<b<<endl;
    return 0;
}