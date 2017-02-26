#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector<int> w(n);
    for(int i = 0; i != n; ++i){
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    int x = w[0], cnt = 1;
    int y = x + 4;
    for(int j = 1; j != n; ++j){
        if(w[j] >= x && w[j] <= y){
            continue;
        }
        else{
            x = w[j];
            y = x + 4;
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}