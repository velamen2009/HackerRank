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
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        vector<int> counts(27, 0);
        for(int i = 0; i < b.length(); ++i){
            if(b[i] == '_'){
                counts[26]++;
            }
            else{
                counts[b[i] - 65]++;
            }
        }
        bool isHappy = true;
        if(0 == counts[26]){
            if(1 == b.length()){
                isHappy = false;
            }
            else{
                for(int i = 0; i < b.length(); ++i){
                    if(0 == i){
                        if(b[i] != b[i+1]){
                            isHappy = false;
                            break;
                        }
                    }
                    else if(i == b.length() - 1){
                        if(b[i] != b[i - 1]){
                            isHappy = false;
                            break;
                        }
                    }
                    else{
                        if(b[i] != b[i - 1] && b[i] != b[i + 1]){
                            isHappy = false;
                            break;
                        }
                    }
                }
            }
        }
        else{
            for(int i = 0; i < counts.size() - 1; ++i){
                if(counts[i] == 1){
                    isHappy = false;
                    break;
                }
            }
        }
        if(isHappy){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}