#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    long int a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        int k = 0;
        while(a != 0 && a < b){
            a >>= 1;
            b >>= 1;
            ++k;
        }
        if(a == 0 && b > 0){
            cout << 0 << endl;
        }
        else{
            a <<= k;
            cout << a << endl;
        }
    }
    return 0;
}