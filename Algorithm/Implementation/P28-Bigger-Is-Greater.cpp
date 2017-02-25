#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string nextGreater(string s){
    if(s.length() <= 1){
        return "no answer";
    }
    int index = s.length() - 2;
    while(index >= 0 && s[index] >= s[index + 1]){
        --index;
    }
    if(index < 0){
        return "no answer";
    }
    string right = s.substr(index + 1, s.length() - index - 1);
    sort(right.begin(), right.end());
    for(int i = 0; i < right.length(); ++i){
        if(right[i] > s[index]){
            char temp = right[i];
            right[i] = s[index];
            s[index] = temp;
            break;
        }
    }
    return s.substr(0, index + 1) + right;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i){
        string s;
        cin >> s;
        string ans = nextGreater(s);
        cout<<ans<<endl;
    }
    return 0;
}