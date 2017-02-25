#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int a){
    int result = 0;
    while(a > 0){
        result = 10 * result + a % 10;
        a /= 10;
    }
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, k;
    cin>>i>>j>>k;
    int count = 0;
    for(int m = i; m <= j; ++m){
        if(0 == abs(m - reverse(m)) % k){
            ++count;
        }
    }
    cout<<count<<endl;
    return 0;
}