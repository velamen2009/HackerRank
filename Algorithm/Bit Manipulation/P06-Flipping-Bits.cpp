#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T;
    unsigned int x;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> x;
        cout << ~x << endl;
    }
    return 0;
}