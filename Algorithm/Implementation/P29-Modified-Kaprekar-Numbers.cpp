#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isValid(int num){
    long long power = (long long)num * num;
    vector<int> digits;
    while(power > 0){
        digits.insert(digits.begin(), power % 10);
        power /= 10;
    }
    int mid = digits.size() / 2;
    int first = 0, second = 0;
    for(int i = 0; i < mid; ++i){
        first = 10 * first + digits[i];
    }
    for(int j = mid; j < digits.size(); ++j){
        second = 10 * second + digits[j];
    }
    return (num == first + second);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int p, q;
    cin >> p;
    cin >> q;
    int cnt = 0;
    for(int i = p; i <= q; ++i){
        if(isValid(i)){
            cout<<i<<" ";
            ++cnt;
        }
    }
    if(0 == cnt){
        cout<<"INVALID RANGE"<<endl;
    }
    return 0;
}