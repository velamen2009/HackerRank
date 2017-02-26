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
    int n;
    while(t--){
        cin >> n;
        int m = 2;
        bool isPrime = false;
        while(m <= sqrt(n)){
            if(n % m == 0){
                isPrime = true;
                break;
            }
            ++m;
        }
        if(1 == n || isPrime){
            cout << "Not prime" << endl;
        }
        else{
            cout << "Prime" << endl;
        }
    }
    return 0;
}