#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0, k = 0, b;
    cin>>n;
    cin>>k;
    vector<int> c(n, 0);
    int sum = 0;
    for(int i = 0; i < n; ++i){
        cin>>c[i];
        sum += c[i];
    }
    cin>>b;
    if(b == (sum / 2 - c[k] / 2)){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<c[k]/2<<endl;
    }
    return 0;
}