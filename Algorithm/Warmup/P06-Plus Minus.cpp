#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int pos = 0, neg = 0, zero = 0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       if(arr[arr_i] > 0){
           pos += 1;
       }
       else if(arr[arr_i] < 0){
           neg += 1;
       }
       else{
           zero += 1;
       }
    }
    float fPos = ((float)pos) / n;
    float fNeg = ((float)neg) / n;
    float fZero = ((float)zero) / n;
    printf("%6f\n", fPos);
    printf("%6f\n", fNeg);
    printf("%6f\n", fZero);
    return 0;
}