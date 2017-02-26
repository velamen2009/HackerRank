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
        int L = 0, R = s.size() - 1, index = -1;
        while(L < R){
            if(s[L] != s[R]){
                int left = L + 1, right = R;
                while(left < right){
                    if(s[left] != s[right]){
                        index = R;
                        break;
                    }
                    ++left;
                    --right;
                }
                if(left >= right){
                    index = L;
                }
                break;
            }
            else{
                ++L;
                --R;
            }
        }
        cout << index << endl;
    }
    return 0;
}