#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<long> num(n);
    long a, b;
    for(int i = 0; i != n; ++i){
        cin >> a >> b;
        num[i] = a - b;
    }
    int count = 0, start = 0, index = 0;
    long sum = 0;
    while(count < n){
        if(sum + num[index] < 0){
            sum = 0;
            count = 0;
            start = index + 1;
        }
        else{
            sum += num[index];
            ++count;
        }
        ++index;
        if(index == n) index = 0;
    }
    cout << start << endl;
    return 0;
}