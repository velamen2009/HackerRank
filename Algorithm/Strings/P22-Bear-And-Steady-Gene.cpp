#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

bool isValid(map<char, int>& target, map<char, int>& window){
    if(target['A'] > 0 && window['A'] < target['A']){ return false; }
    if(target['C'] > 0 && window['C'] < target['C']){ return false; }
    if(target['G'] > 0 && window['G'] < target['G']){ return false; }
    if(target['T'] > 0 && window['T'] < target['T']){ return false; }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    string s;
    cin >> s;
    int len = s.size(), g = len / 4;
    map<char, int> target, window; //A, C, G, T
    target['A'] = 0;
    target['C'] = 0;
    target['G'] = 0;
    target['T'] = 0;
    window['A'] = 0;
    window['C'] = 0;
    window['G'] = 0;
    window['T'] = 0;
    for(int i = 0; i < len; ++i){
        target[s[i]]++;
    }
    if(target['A'] == g && target['C'] == g && target['G'] == g && target['T'] == g){
        cout << 0 << endl;
        return 0;
    }
    target['A'] = target['A'] > g ? target['A'] - g : 0;
    target['C'] = target['C'] > g ? target['C'] - g : 0;
    target['G'] = target['G'] > g ? target['G'] - g : 0;
    target['T'] = target['T'] > g ? target['T'] - g : 0;
    int L = 0, R = 0, min = n + 1;
    window[s[0]]++;
    while(R < n && L <= R){
        if(isValid(target, window)){
            int temp = R - L + 1;
            min = min < temp ? min : temp;
            window[s[L++]]--;
        }
        else{
            if(R == n - 1){
                break;
            }
            else{
                window[s[++R]]++;
            }
        }
    }
    cout << min << endl;
    return 0;
}