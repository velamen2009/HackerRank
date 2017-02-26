#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, x;
    cin >> n;
    vector<int> dict(100);
    for(int i = 0; i < n; ++i){
        cin >> x;
        dict[x]++;
    }
    for(int i = 0; i < 100; ++i){
        cout << dict[i] << " ";
    }
    return 0;
}