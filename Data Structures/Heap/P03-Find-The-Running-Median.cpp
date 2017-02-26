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

void rebalance(priority_queue<int>& maxHeap, priority_queue<int, vector<int>, greater<int> >& minHeap){
    int t = maxHeap.size() - minHeap.size();
    if(t >= 2){
        minHeap.push(maxHeap.top());
        maxHeap.pop();
    }
    else if(t <= -2){
        maxHeap.push(minHeap.top());
        minHeap.pop();
    }
}

void add(int x, priority_queue<int>& maxHeap, priority_queue<int, vector<int>, greater<int> >& minHeap){
    if(maxHeap.empty() || x <= maxHeap.top()){
        maxHeap.push(x);
    }
    else{
        minHeap.push(x);
    }
    rebalance(maxHeap, minHeap);
}

double median(priority_queue<int>& maxHeap, priority_queue<int, vector<int>, greater<int> >& minHeap){
    double ans = 0;
    if(maxHeap.size() == minHeap.size()){
        ans = (double(maxHeap.top()) + minHeap.top()) / 2;
    }
    else if(maxHeap.size() > minHeap.size()){
        ans = maxHeap.top();
    }
    else{
        ans = minHeap.top();
    }
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, x;
    cin >> n;
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int> > minHeap;
    while(n--){
        cin >> x;
        add(x, maxHeap, minHeap);
        double ans = median(maxHeap, minHeap);
        printf("%.1f\n", ans);
    }
    return 0;
}