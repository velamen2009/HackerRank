#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    k %= n;
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        int index = m - k;
        if(index < 0){
            index += n;
        }
        cout<<a[index]<<endl;
    }
    return 0;
}