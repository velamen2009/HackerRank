#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    string num[11] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};
    cin >> a >> b;
    for(int i = a; i <= b; ++i){
        if(i >= 1 && i <= 9){
            cout << num[i - 1] << endl;
        }
        else if(0 == i % 2){
            cout << num[9] << endl;
        }
        else{
            cout << num[10] << endl;
        }
    }
    return 0;
}