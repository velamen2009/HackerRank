#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, q;
    cin >> n >> q;
    int lastans = 0;
    vector<vector<int>> seqlist(n, vector<int>());
    for(int i = 0; i < q; ++i){
        int opt, x, y;
        cin >> opt >> x >> y;
        if(1 == opt){
            int index = (x ^ lastans) % n;
            seqlist[index].push_back(y);
        }
        else{
            int index = (x ^ lastans) % n;
            lastans = seqlist[index][y % seqlist[index].size()];
            cout << lastans << endl;
        }
    }
    return 0;
}