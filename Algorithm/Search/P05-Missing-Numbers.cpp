#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    unordered_map<int, int> dict;
    vector<int> out;
    int n, m, x;
    cin >> n;
    for(int i = 0; i != n; ++i){
        cin >> x;
        if(dict.find(x) == dict.end()){
            dict[x] = 1;
        }
        else{
            dict[x]++;
        }
    }
    cin >> m;
    for(int i = 0; i != m; ++i){
        cin >> x;
        if(dict.find(x) == dict.end()){
            out.push_back(x);
        }
        else if(dict[x] > 0){
            dict[x]--;
        }
        else{
            out.push_back(x);
        }
    }
    sort(out.begin(), out.end());
    vector<int>::iterator endit = unique (out.begin(), out.end());  
    for(vector<int>::iterator it = out.begin(); it != endit; ++it){
        cout << *it << " ";
    }
    return 0;
}