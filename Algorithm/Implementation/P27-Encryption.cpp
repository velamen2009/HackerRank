#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    vector<char> text;
    for(int i = 0; i < s.length(); ++i){
        if(' ' != s[i]){
            text.push_back(s[i]);
        }
    }
    int len = text.size();
    int row = sqrt(len);
    int col = row;
    if(row * row < len){ col += 1; }
    if(row * col < len){ row += 1; }
    for(int i = 0; i < col; ++i){
        string curRow = "";
        for(int j = 0; j < row; ++j){
            if(i + j * col < len){
                curRow += text[i + j * col];   
            }
        }
        cout<<curRow<<" ";
    }
    return 0;
}