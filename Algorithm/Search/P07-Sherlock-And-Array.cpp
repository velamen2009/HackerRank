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
        long sum = 0, left = 0, right = 0;
        bool isOK = false;
        cin >> n;
        vector<long> num(n);
        for(int i = 0; i < n; ++i){
            cin >> num[i];
            sum += num[i];
        }
        for(int k = 0; k < n; ++k){
            if(0 == k){
                left = 0;
                right = sum - num[k];
            }
            else{
                left += num[k - 1];
                right -= num[k];    
            }
            if(left == right){
                isOK = true;
                break;
            }
        }
        cout << (isOK == true ? "YES" : "NO") << endl;
    }
    return 0;
}