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
        int c;
        int m;
        cin >> n >> c >> m;
        int wrapers = n / c;
        int count = wrapers;
        while(wrapers >= m){
            count += wrapers / m;
            wrapers = wrapers % m + wrapers / m;
        }
        cout<<count<<endl;
    }
    return 0;
}