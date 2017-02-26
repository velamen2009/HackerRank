#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, d;
    cin >> n >> d;
    vector<int> num(n);
    for(int i = 0; i < n; ++i){
        cin >> num[i];
    }
    for(int i = 0; i < n; ++i){
        cout << num[(i + d) % n] << " ";
    }
    return 0;
}