#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int count(string s1, string s2){
    int cnt = 0;
    for(int i = 0; i < s1.length(); ++i){
        if('1' == s1[i] || '1' == s2[i]){
            ++cnt;
        }
    }
    return cnt;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    vector<int> cnt(m, 0);
    for(int i = 0; i < n; ++i){
        for(int j = i + 1; j < n; ++j){
            int index = count(topic[i], topic[j]);
            cnt[index - 1] += 1;
        }
    }
    int maxIndex = 0, maxCnt = 0;
    for(int i = m - 1; i >= 0; --i){
        if(cnt[i] > 0){
            maxCnt = cnt[i];
            maxIndex = i + 1;
            break;
        }
    }
    cout<<maxIndex<<endl;
    cout<<maxCnt<<endl;
    return 0;
}