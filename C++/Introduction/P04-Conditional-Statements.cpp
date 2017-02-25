#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> N;
    if(N > 9){
        cout << num[0];
    }
    else{
        cout << num[N];
    }
    return 0;
}