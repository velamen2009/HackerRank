#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
    int flag = 0;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string
    vector<int> dict(26);
    for(int i = 0; i < s.size(); ++i){
        dict[int(s[i]) - 97]++;
    }
    int cnt = 0;
    for(int i = 0; i < dict.size(); ++i){
        if(0 != dict[i] % 2){
            ++cnt;
        }
    }
    if(cnt <= 1){
        flag = 1;
    }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}