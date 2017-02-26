#include <cmath>
#include <cstdio>
#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

int minMax(vector<int>& num, int n, int k){
    deque<int> Qi;
    int ans, i = 0;
    for(i = 0; i < k; ++i){
        while(!Qi.empty() && num[i] >= num[Qi.back()]){
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    ans = num[Qi.front()];
    for( ; i < n; ++i){
        ans = ans < num[Qi.front()] ? ans : num[Qi.front()];
        while(!Qi.empty() && Qi.front() <= i - k){
            Qi.pop_front();
        }
        while(!Qi.empty() && num[i] >= num[Qi.back()]){
            Qi.pop_back();
        }
        Qi.push_back(i);
    }
    ans = ans < num[Qi.front()] ? ans : num[Qi.front()];
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, q, k;
    cin >> n >> q;
    vector<int> num(n);
    for(int i = 0; i != n; ++i){
        cin >> num[i];
    }
    while(q--){
        cin >> k;
        cout << minMax(num, n, k) << endl;
    }
    return 0;
}