#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    int diag1 = 0, diag2 = 0;
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
          if(a_i == a_j){
              diag1 += a[a_i][a_j];
          }
          if(a_i + a_j == n - 1){
              diag2 += a[a_i][a_j];
          }
       }
    }
    cout<<abs(diag1 - diag2)<<endl;
    return 0;
}