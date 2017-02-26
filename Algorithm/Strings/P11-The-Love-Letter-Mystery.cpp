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
        int L = 0, R = s.size() - 1, opts = 0;
        while(L < R){
            opts += abs(int(s[L]) - int(s[R]));
            ++L;
            --R;
        }
        cout << opts << endl;
    }
    return 0;
}