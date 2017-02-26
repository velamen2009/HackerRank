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
    int n1;
    int n2;
    int n3;
    int x;
    int sum1 = 0, sum2 = 0, sum3 = 0, min;
    cin >> n1 >> n2 >> n3;
    vector<int> v1(n1);
    stack<int> h1;
    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> v1[h1_i];
    }
    for(int i = n1 - 1; i >= 0; --i){
       h1.push(v1[i]);
       sum1 += v1[i];
    }
    min = sum1;
    
    vector<int> v2(n2);
    stack<int> h2;
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> v2[h2_i];
    }
    for(int i = n2 - 1; i >= 0; --i){
       h2.push(v2[i]);
       sum2 += v2[i];
    }
    min = min < sum2 ? min : sum2;
    
    vector<int> v3(n3);
    stack<int> h3;
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> v3[h3_i];
    }
    for(int i = n3 - 1; i >= 0; --i){
       h3.push(v3[i]);
       sum3 += v3[i];
    }
    min = min < sum3 ? min : sum3;
    
    while(!(sum1 == sum2 && sum1 == sum3)){
        while(sum1 > min){
            sum1 -= h1.top();
            h1.pop();
        }
        min = sum1;
        while(sum2 > min){
            sum2 -= h2.top();
            h2.pop();
        }
        min = sum2;
        while(sum3 > min){
            sum3 -= h3.top();
            h3.pop();
        }
        min = sum3;
    }
    cout << sum1 << endl;
    return 0;
}