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
    while(t--){
        int n, m;
        cin >> n >> m;
        int p = ((m == 1 || n % 2 == 0) ? 2 : 1);
        cout << p << endl;
    }
    return 0;
}