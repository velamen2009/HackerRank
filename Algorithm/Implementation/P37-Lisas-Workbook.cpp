#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> chapters(n, 0);
    for(int i = 0; i < n; ++i){
        cin >> chapters[i];
    }
    int page = 0, ans = 0;
    for(int i = 0; i < n; ++i){
        int q = chapters[i], j = 1;
        for(; j + k - 1 <= q; j += k){
            ++page;
            if(j <= page && j + k - 1 >= page){
                ans += 1;
            }
        }
        if(j <= q){
            ++page;
            if(j <= page && q >= page){
                ++ans;
            }
        }
    }
    cout << ans << endl;
    return 0;
}