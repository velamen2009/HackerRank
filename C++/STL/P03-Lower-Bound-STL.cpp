#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, Q;
    cin >> N;
    vector<int> num(N, 0);
    for(int i = 0; i < N; ++i){
        cin >> num[i];
    }
    cin >> Q;
    for(int i = 0; i < Q; ++i){
        int val;
        cin >> val;
        vector<int>::iterator it = lower_bound(num.begin(), num.end(), val);
        if(*it == val){
            cout << "Yes " << it - num.begin() + 1 << endl;
        }
        else{
            cout << "No " << it - num.begin() + 1 << endl;
        }
    }
    return 0;
}