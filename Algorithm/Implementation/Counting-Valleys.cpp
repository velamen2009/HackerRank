nclude <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    string s;
    cin >> s;
    int sum = 0, ans = 0;
    bool valley = false;
    for(int i = 0; i < s.size(); ++i){
        char c = s[i];
        if(c == 'U'){
            sum += 1;
        }
        else{
            sum -= 1;
        }
        if(sum < 0 && valley == false){
            valley = true;
        }
        else{
            if(sum >= 0 && valley == true){
                valley = false;
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
