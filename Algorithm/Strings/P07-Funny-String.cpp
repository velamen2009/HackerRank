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
        bool isFunny = true;
        int len = s.size();
        int n = (len + 1) / 2 - 1;
        for(int j = 0; j < n; ++j){
            if(abs(int(s[j]) - int(s[j + 1])) != abs(int(s[len - j - 1]) - int(s[len - j - 2]))){
                isFunny = false;
                break;
            }
        }
        cout << (true == isFunny ? "Funny" : "Not Funny") << endl;
    }
    return 0;
}