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

int gcd(int a, int b){
    while (b > 0) {
            int temp = b;
            b = a % b; // % is remainder
            a = temp;
    }
    return a;
}

int gcd(vector<int> a){
    int result = a[0];
    for(int i = 1; i < a.size(); ++i){
        result = gcd(result, a[i]);
    }
    return result;
}

int lcm(int a, int b){
    return a * (b / gcd(a, b));
}

int lcm(vector<int> b){
    int result = b[0];
    for(int i = 1; i < b.size(); ++i){
        result = lcm(result, b[i]);
    }
    return result;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    int lc = lcm(a);
    int gc = gcd(b);
    int count = 0;
    for(int i = lc, j = 2; i <= gc; i = lc * j, ++j){
        if(0 == gc % i){ ++count; }
    }
    cout<<count<<endl;
    return 0;
}