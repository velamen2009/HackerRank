#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
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
    int n = 26;
    vector<int> h(n);
    for(int h_i = 0;h_i < n;h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int size = 0, len = 0, height = 1;
    for(int i = 0; i < word.length(); ++i){
        if(' ' == word[i]){
            if(0 != len){
                size += len * height;
            }
            len = 0;
            height = 1;
        }
        else{
            ++len;
            if(height < h[word[i] - 97]){
                height = h[word[i] - 97];
            }
            if(i == word.length() - 1){
                size += len * height;
            }
        }
    }
    cout<<size<<endl;
    return 0;
}