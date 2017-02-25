#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string, int> dict;
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; ++i){
        int opt, val;
        string name;
        cin >> opt >> name;
        if(1 == opt){
            cin >> val;
            if(dict.end() != dict.find(name)){
                dict[name] += val;
            }
            else{
                dict.insert(make_pair(name, val));
            }
        }
        else if(2 == opt){
            dict.erase(name);
        }
        else{
            if(dict.end() != dict.find(name)){
                cout << dict[name] << endl;
            }
            else{
                cout << 0 << endl;
            }
        }
    }
    return 0;
}