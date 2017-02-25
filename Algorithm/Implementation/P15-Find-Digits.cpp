#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int cnt = 0, m = n;
        while(m > 0){
            if(0 != m % 10 && 0 == n % (m % 10)){
                ++cnt;
            }
            m /= 10;
        }
        cout<<cnt<<endl;
    }
    return 0;
}