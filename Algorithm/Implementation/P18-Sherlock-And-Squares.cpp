#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin>>T;
    for(int i = 0; i < T; ++i){
        int A, B;
        cin>>A>>B;
        int cnt = 0;
        int s = sqrt(A);
        if(pow(s, 2) < A){
            s += 1;
        }
        while(pow(s, 2) <= B){
            ++cnt;
            ++s;
        }
        cout<<cnt<<endl;
    }
    return 0;
}