#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    map<int, string> dict;
    dict[0] = "";
    dict[1] = "one";
    dict[2] = "two";
    dict[3] = "three";
    dict[4] = "four";
    dict[5] = "five";
    dict[6] = "six";
    dict[7] = "seven";
    dict[8] = "eight";
    dict[9] = "nine";
    dict[10] = "then";
    dict[11] = "eleven";
    dict[12] = "twelve";
    dict[13] = "thirteen";
    dict[14] = "fourteen";
    dict[15] = "quarter";
    dict[16] = "sixteen";
    dict[17] = "seventeen";
    dict[18] = "eighteen";
    dict[19] = "nineteen";
    dict[20] = "twenty";
    dict[30] = "half";
    if(0 == m){
        cout << dict[h] << " o' clock" << endl;
    }
    else{
        string mid = " past ";
        if(m > 30){
            h = (h + 1) % 12;
            m = 60 - m;
            mid = " to ";
        }
        if(m == 15 || m == 30){
            cout << dict[m] << mid << dict[h] << endl;
        }
        else if(m <= 20){
            cout << dict[m] << " minutes" << mid << dict[h] << endl;
        }
        else if(m < 30){
            cout << dict[20] << " " << dict[m - 20] << " minutes" << mid << dict[h] <<endl;
        }
    }
    return 0;
}