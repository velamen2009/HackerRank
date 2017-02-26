#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> x(n), delta(n - 1);
    for(int i = 0; i != n; ++i){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int min = INT_MAX;
    for(int i = 0; i != n - 1; ++i){
        delta[i] = x[i + 1] - x[i];
        if(delta[i] <= min){
            min = delta[i];
        }
    }
    for(int i = 0; i != n - 1; ++i){
        if(min == delta[i]){
            cout << x[i] << " " << x[i + 1] << " ";
        }
    }
    return 0;
}