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
    int n;
    int k;
    cin >> n >> k;
    string number;
    cin >> number;
    int len = number.size();
    int cnt = 0, index = 0;
    for(int i = 0; i < len / 2; ++i){
        if(number[i] != number[len - i - 1]){
            cnt++;
        }
    }
    if(cnt > k){
        cout << -1 << endl;
        return 0;
    }
    for(int index = 0; index < len / 2 && k > 0; ++index){
        if(number[index] == number[len - 1 - index]){
            if('9' == number[index]){ continue; }
            if(k - cnt >= 2){
                number[index] = '9';
                number[len - 1 - index] = '9';
                k -= 2;
            }
        }
        else{
            if('9' != number[index] && '9' != number[len - 1 - index]){
                if(k - cnt >= 1){
                    number[index] = '9';
                    number[len - 1 - index] = '9';
                    k -= 2;
                    cnt -= 1;
                }
                else{
                    number[index] = max(number[index], number[len - 1 - index]);
                    number[len - 1 - index] = max(number[index], number[len - 1 - index]);
                    k -= 1;
                    cnt -= 1;
                }
            }
            else{
                number[index] = '9';
                number[len - 1 - index] = '9';
                k -= 1;
                cnt -= 1;
            }
        }
    }
    if(k > 0 && 1 == len % 2){
        number[len / 2] = '9';
    }
    cout << number << endl;
    return 0;
}