#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T, n;
    cin >> T;
    for(int i = 0; i != T; ++i){
        cin >> n;
        string s = ((0 == n % 7 || 1 == n % 7)) ? "Second" : "First";
        cout << s << endl;
    }
    return 0;
}