#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> num(1000, 0);
    num[0] = 1;
    int len = 1, carry = 0;
    for(int i = 2; i <= n; ++i){
        carry = 0;
        for(int j = 0; j < len; ++j){
            int mul = num[j] * i + carry;
            num[j] = mul % 10;
            carry = mul / 10;
        }
        while(carry > 0){
            num[len] = carry % 10;
            carry /= 10;
            ++len;
        }
    }
    for(int j = len - 1; j >= 0; --j){
        cout<<num[j];
    }
    cout<<endl;
    return 0;
}