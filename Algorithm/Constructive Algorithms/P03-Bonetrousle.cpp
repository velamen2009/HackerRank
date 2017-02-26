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
    long long int n, k, b;
    while(t--){
        cin >> n >> k >> b;
        unsigned long long min = 0, max = 0;
        for(long long int i = 1; i <= b; ++i){
            min += i;
            max += k - i + 1;
        }
        if(n < min || n > max){
            cout << -1 << endl;
        }
        else{
            vector<unsigned long long> comb;
            unsigned long long mid = n / b;
            if(b % 2 == 0){
                for(unsigned long long m = mid - (b - 1)/ 2; m <= mid + b / 2; ++m){
                    comb.push_back(m);
                }
            }
            else{
                for(unsigned long long m = mid - b / 2; m <= mid + b / 2; ++m){
                    comb.push_back(m);
                }
            }
            unsigned long long sum = 0, delta;
            for(unsigned long long i = 0; i < comb.size(); ++i){
                sum += comb[i];
            }
            if(n > sum){
                for(unsigned long long i = 0; i < n - sum; ++i){
                    comb[comb.size() - 1 - i]++;
                }
            }
            else{
                for(unsigned long long i = 0; i < sum - n; ++i){
                    comb[i]--;
                }
            }
            for(unsigned long long i = 0; i < comb.size(); ++i){
                cout << comb[i];
                if(i < comb.size() - 1){
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}