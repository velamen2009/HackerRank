#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int count = 0, cur = 5;
    for(int i = 0; i < n; ++i){
        count += cur / 2;
        cur = cur / 2 * 3;
    }
    cout<<count<<endl;
    return 0;
}