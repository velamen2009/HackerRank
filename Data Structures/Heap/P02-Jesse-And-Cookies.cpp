#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, k, x, ans = 0;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int> > heap;
    while(n--){
        cin >> x;
        heap.push(x);
    }
    while(heap.top() < k && heap.size() > 1){
        int y = heap.top();
        heap.pop();
        int z = heap.top();
        heap.pop();
        heap.push(y + 2 * z);
        ++ans;
    }
    if(heap.size() == 1 && heap.top() < k){
        ans = -1;
    }
    cout << ans << endl;
    return 0;
}