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
    string s;
    for(int i = 0; i < T; ++i){
        cin >> s;
        for(int k = 0; k < s.size(); k += 2){
            cout << s[k];
        }
        cout << " ";
        for(int k = 1; k < s.size(); k += 2){
            cout << s[k];
        }
        cout << endl;
    }
    return 0;
}