#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    long count = 0;
    int cnt = 0;
    for(int i = 0; i < s.length(); ++i){
        if('a' == s[i]) ++cnt;
    }
    if(0 == cnt){
        cout<<"0"<<endl;
    }
    else{
        long fullStr = n / s.length();
        count = fullStr * cnt;
        int left = n - s.length() * fullStr;
        int leftCnt = 0;
        for(int i = 0; i < left; ++i){
            if('a' == s[i]) ++leftCnt;
        }
        count += leftCnt;
        cout<<count<<endl;
    }
    return 0;
}