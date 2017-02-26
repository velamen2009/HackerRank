#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, x;
    cin >> n;
    int halfn = n / 2;
    string s;
    vector<string> arr;
    vector<string> out(n, "-");
    vector<int> count(100), accumulate(100), cur(100), num(n);
    for(int i = 0; i != n; ++i){
        cin >> x >> s;
        count[x]++;
        arr.push_back(s);
        num[i] = x;
    }
    accumulate[0] = count[0];
    for(int i = 1; i < 100; ++i){
        accumulate[i] = accumulate[i - 1] + count[i];
    }
    for(int i = 0; i < n; ++i){
        int curX = num[i];
        
        if(i >= halfn){
            int index = cur[curX];
            if(curX > 0){
                index += accumulate[curX - 1];
            }
            out[index] = arr[i];
        }
        cur[curX]++;
    }
    for(int i = 0; i != n; ++i){
        cout << out[i] << " ";
    }
    return 0;
}