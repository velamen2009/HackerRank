#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

bool lessThanOneStep(vector<int>& dict){
    map<int, int> mymap;
    for(int i = 0; i < dict.size() - 1; ++i){
        if(dict[i] > 0){
            if(mymap.end() != mymap.find(dict[i])){
                mymap[dict[i]]++;
            }
            else{
                mymap.insert(make_pair(dict[i], 1));
            }
        }
    }
    if(mymap.size() > 2){
        return false;
    }
    if(2 == mymap.size()){
        for(map<int, int>::iterator it = mymap.begin(); it != mymap.end(); ++it){
            if(it->second == 1){
                return true;
            }
        }
        return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin >> s;
    vector<int> dict(26);
    for(int i = 0; i < s.size(); ++i){
        dict[int(s[i]) - 97]++;
    }
    cout << (true == lessThanOneStep(dict) ? "YES" : "NO") << endl;
    return 0;
}