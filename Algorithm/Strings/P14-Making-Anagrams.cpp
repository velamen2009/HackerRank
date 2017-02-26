#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string a, b;
    cin >> a;
    cin >> b;
    vector<int> dict(26);
    for(int i = 0; i < a.size(); ++i){
        dict[int(a[i]) - 97]++;
    }
    for(int i = 0; i < b.size(); ++i){
        dict[int(b[i]) - 97]--;
    }
    int sum = 0;
    for(int i = 0; i < dict.size(); ++i){
        sum += abs(dict[i]);
    }
    cout << sum << endl;
    return 0;
}