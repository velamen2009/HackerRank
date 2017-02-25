#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> n;
        vector<int> a(n);
        for(int j = 0; j < n; ++j){
            cin >> a[j];
        }
        int sum = 0;
        for(int k = 0; k < n; ++k){
            for(int j = k + 1; j < n; ++j){
                if(a[k] > a[j]){
                    ++sum;
                }
            }
        }
        cout << (0 == sum % 2 ? "YES" : "NO") << endl;
    }
    return 0;
}