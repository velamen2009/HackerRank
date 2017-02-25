#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool findAt(vector<string>& G, vector<string>& P, int i, int j){
    for(int k = 0; k < P.size(); ++k){
        if(G[i + k].substr(j, P[0].size()) != P[k]){
            return false;
        }
    }
    return true;
}

bool findPattern(vector<string>& G, vector<string>& P, int R, int C, int r, int c){
    for(int i = 0; i <= R - r; ++i){
        for(int j = 0; j <= C - c; ++j){
            if(findAt(G, P, i, j)){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        bool pattern = findPattern(G, P, R, C, r, c);
        cout << (pattern == true ? "YES" : "NO") << endl;
    }
    return 0;
}