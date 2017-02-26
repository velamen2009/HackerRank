#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int median(vector<int>& arr, int mid, int L, int R){
    int pivot = arr[L];
    int i = L + 1, j = L + 1;
    for(; j <= R; ++j){
        if(arr[j] <= pivot){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            ++i;
        }
    }
    arr[L] = arr[i - 1];
    arr[i - 1] = pivot;
    if(i - 1 == mid){
        return pivot;
    }
    else if(i - 1 > mid){
        return median(arr, mid, L, i - 2);
    }
    else{
        return median(arr, mid, i, R);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i != n; ++i){
        cin >> arr[i];
    }
    cout << median(arr, n / 2, 0, n - 1) << endl;
    return 0;
}