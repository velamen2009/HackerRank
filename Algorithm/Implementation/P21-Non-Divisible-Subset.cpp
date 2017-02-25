#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n >> k;
    vector<int> num(n);
    vector<int> mod(k);
    for(int i = 0; i < n; ++i){
        cin >> num[i];
        num[i] %= k;
        mod[num[i]]++;
    }
    int cnt = 0;
    if(mod[0] > 0){ cnt = 1; }
    for(int i = 1; i <= k / 2; ++i){
        if(i == k - i){
            if(mod[i] > 0){
                ++cnt;
            }
        }
        else{
            cnt += max(mod[i], mod[k - i]);
        }
    }
    cout << cnt << endl;
    return 0;
}