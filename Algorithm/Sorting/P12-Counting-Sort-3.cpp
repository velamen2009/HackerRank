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
    string dummy;
    vector<int> A(n), C(100);
    for (int i = 0; i < n; i++){
        cin >> A[i] >> dummy;
        C[A[i]]++;
    }
    
    for (int i = 1; i < 100; i++) {
        C[i] += C[i-1];
    }
    
    for (int i = 0; i < 100; i++){
        cout << C[i] << ' ';
    }
    return 0;
}