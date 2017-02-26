#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> num(n);
        for(int i = 0; i < n; ++i){
            cin >> num[i];
        }
        if(n % 2 == 0){
            cout << 0 << endl;
        }
        else{
            int ans = 0;
            for(int i = 0; i < n; i += 2){
                ans ^= num[i];
            }
            cout << ans << endl;
        }
    }
    return 0;
}