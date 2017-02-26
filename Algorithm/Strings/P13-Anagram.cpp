#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    string s;
    cin >> T;
    while(T){
        cin >> s;
        int len = s.size();
        if(0 != len % 2){
            cout << -1 << endl;
        }
        else{
            vector<int> dict(26);
            for(int i = 0; i < len / 2; ++i){
                dict[int(s[i]) - 97]++;
            }
            for(int i = len / 2; i < len; ++i){
                dict[int(s[i]) - 97]--;
            }
            int sum = 0;
            for(int i = 0; i < dict.size(); ++i){
                if(dict[i] > 0){
                    sum += dict[i];
                }
            }
            cout << sum << endl;
        }
        --T;
    }
    return 0;
}