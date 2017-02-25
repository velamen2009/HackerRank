#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, n, a, b;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> n;
        cin >> a;
        cin >> b;
        if(a == b){
            cout << (n - 1) * a;
        }
        else{
            int max = a > b ? a : b;
            int min = a + b - max;
            int delta = max - min;
            int sum = min * (n - 1);
            for(int i = 0; i < n; ++i){
                cout << sum + i * delta << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}