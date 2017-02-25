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

void balance(priority_queue<int>& lower, priority_queue<int, vector<int>, greater<int> >& higher){
    int t = higher.size() - lower.size();
    if(t >= 2){
        lower.push(higher.top());
        higher.pop();
    }
    else if(t <= -2){
        higher.push(lower.top());
        lower.pop();
    }
}

void addNumber(int number, priority_queue<int>& lower, priority_queue<int, vector<int>, greater<int> >& higher){
    if(lower.empty() || lower.top() > number){
        lower.push(number);
    }
    else{
        higher.push(number);
    }
    balance(lower, higher);
}

double median(priority_queue<int>& lower, priority_queue<int, vector<int>, greater<int> >& higher){
    double ans = 0;
    if(higher.size() == lower.size()){
        ans = (double(higher.top()) + lower.top()) / 2;
    }
    else if(higher.size() > lower.size()){
        ans = higher.top();
    }
    else{
        ans = lower.top();
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    priority_queue<int, vector<int>, greater<int> > higher;
    priority_queue<int> lower;
    
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
        addNumber(a[a_i], lower, higher);
        double ans = median(lower, higher);
        printf("%.1f\n", ans);
    }
   
    return 0;
}