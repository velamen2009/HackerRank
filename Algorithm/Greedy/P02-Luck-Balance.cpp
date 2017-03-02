#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, K, L, T;
    cin >> N >> K;
    int ans = 0;
    vector<int> vec;
    for(int i = 0; i < N; ++i){
        cin >> L >> T;
        if(0 == T){
            ans += L;
        }
        else{
            vec.push_back(L);
        }
    }
    sort(vec.begin(), vec.end());
    int size = vec.size();
    int m = size - K;
    for(int i = 0; i < size; ++i){
        if(i < m){
            ans -= vec[i];
        }
        else{
            ans += vec[i];
        }
    }
    cout << ans << endl;
    return 0;
}
