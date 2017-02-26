#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    for(int i = 0; i < T; ++i){
        string s;
        cin >> s;
        cout << s.size() - distance(s.begin(), unique(s.begin(), s.end())) << endl;
    }
    return 0;
}