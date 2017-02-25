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
        int height = 1;
        for(int i = 1; i <= n; ++i){
            if(1 == i % 2){
                height *= 2;
            }
            else{
                height += 1;
            }
        }
        cout<<height<<endl;
    }
    return 0;
}