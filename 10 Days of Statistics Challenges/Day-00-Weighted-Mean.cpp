#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    vector<int> x(n), y(n);
    for(int i = 0; i < n; ++i){
        cin >> x[i];
    }
    for(int j = 0; j < n; ++j){
        cin >> y[j];
        sum2 += y[j];
    }
    for(int k = 0; k < n; ++k){
        sum1 += x[k] * y[k];
    }
    double ans = double(sum1)/double(sum2);
    printf("%0.1f", ans);
    return 0;
}
