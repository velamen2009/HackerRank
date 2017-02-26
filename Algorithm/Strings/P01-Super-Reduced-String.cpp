#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin >> s;
    int len = s.size();
    vector<int> num(len, 1);
    int L = 0, R = 1;
    while(R < len){
        if(s[L] == s[R]){
            num[L] = 0;
            num[R] = 0;
            ++R;
            while(L >=0 && 0 == num[L]){
                --L;
            }
            if(L < 0){
                L = R;
                ++R;
            }
        }
        else{
            L = R;
            ++R;
        }
    }
    string ans = "";
    for(int i = 0; i < num.size(); ++i){
        if(1 == num[i]){
            ans += s[i];
        }
    }
    cout << ("" == ans ? "Empty String" : ans) << endl;
    return 0;
}