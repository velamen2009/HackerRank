#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char get(char a, char b){
    if(a == b){
        return '0';
    }
    return '1';
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k;
    cin >> n >> k;
    string s = "";
    cin >> s;
    string ans = "";
    for(int i = 0; i < n; ++i){
        if(0 == i){
            ans += s[i];
        }
        else if(i < k){
            ans += get(s[i], s[i - 1]);
        }
        else{
            ans += get(ans[i - k], get(s[i], s[i - 1]));
        }
    }
    cout << ans << endl;
    return 0;
}