#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int day1, month1, year1, day2, month2, year2;
    cin >> day1 >> month1 >> year1;
    cin >> day2 >> month2 >> year2;
    
    if(year1 > year2){
        cout << 10000 << endl;
    }
    else if(year1 == year2){
        if(month1 > month2){
            cout << (month1 - month2) * 500 << endl;
        }
        else if(month1 == month2){
            if(day1 > day2){
                cout << (day1 - day2) * 15 << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
        else{
            cout << 0 << endl;
        }
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}
