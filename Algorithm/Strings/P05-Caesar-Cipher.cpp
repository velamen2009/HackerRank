#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char cipher(char c, int k){
    if(c >= 'a' && c <= 'z'){
        return char( (int(c) - 97 + k) % 26 + 97 );
    }
    else if(c >= 'A' && c <= 'Z'){
        return char( (int(c) - 65 + k) % 26 + 65 );
    }
    else{
        return c;
    }
}

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    for(int i = 0; i < s.size(); ++i){
        s[i] = cipher(s[i], k);
    }
    cout << s << endl;
    return 0;
}