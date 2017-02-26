#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int V, n;
    cin >> V;
    cin >> n;
    vector<int> ar(n, 0);
    for(int i = 0; i < n; ++i){
        cin >> ar[i];
    }
    int L = 0, R = n;
    while(L < R){
        int mid = (L + R) >> 1;
        if(V == ar[mid]){
            cout << mid << endl;
            break;
        }
        else if(V > ar[mid]){
            L = mid + 1;
        }
        else{
            R = mid;
        }
    }
    return 0;
}