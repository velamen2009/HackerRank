#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool binSearch(vector<int>& a, int L, int R, int target){
    int index = -1;
    while(L < R){
        int mid = (L + R >> 1);
        if(a[mid] == target){
            index = mid;
            break;
        }
        else if(a[mid] > target){
            R = mid;
        }
        else{
            L = mid + 1;
        }
    }
    return index >= 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, d;
    cin >> n >> d;
    vector<int> a(n, 0);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int cnt = 0;
    for(int j = 1; j < a.size() - 1; ++j){
        if(binSearch(a, 0, j, a[j] - d) && binSearch(a, j + 1, a.size(), a[j] + d)){
            ++cnt;
        }
    }
    cout << cnt <<endl;
    return 0;
}