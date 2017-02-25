#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int> s;
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; ++i){
        int opt, val;
        cin >> opt >> val;
        if(1 == opt){
            s.insert(val);
        }
        else if(2 == opt){
            s.erase(val);
        }
        else{
            if(s.end() != s.find(val)){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}