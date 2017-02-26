#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    cin >> N;
    unordered_map<string, int> dict;
    for(int i = 0; i != N; ++i){
        string s;
        cin >> s;
        if(dict.end() == dict.find(s)){
            dict.insert(make_pair(s, 1));
        }
        else{
            dict[s] += 1;
        }
    }
    int Q;
    cin >> Q;
    for(int i = 0; i != Q; ++i){
        string t;
        cin >> t;
        cout << dict[t] << endl;
    }
    return 0;
}