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

void merge(vector<int>& a, vector<int>& temp, int L, int mid, int R, long long& ans){
    int left = L, right = mid + 1, index = L;
    while(left <= mid && right <= R){
        if(a[left] <= a[right]){
            temp[index] = a[left];
            ++left;
        }
        else{
            temp[index] = a[right];
            ans += mid - left + 1;
            ++right;
        }
        ++index;
    }
    while(left <= mid){
        temp[index++] = a[left++];
    }
    while(right <= R){
        temp[index++] = a[right++];
    }
    for(int i = L; i <= R; ++i){
        a[i] = temp[i];
    }
}

void mergeSort(vector<int>& a, vector<int>& temp, int L, int R, long long& ans){
    if(L >= R) return;
    int mid = L + ((R - L) >> 1); 
    mergeSort(a, temp, L, mid, ans);
    mergeSort(a, temp, mid + 1, R, ans);
    merge(a, temp, L, mid, R, ans);
}

long long count_inversions(vector<int>& a) {
    vector<int> temp(a.size());
    long long ans = 0;
    mergeSort(a, temp, 0, a.size() - 1, ans);
    return ans;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0;arr_i < n;arr_i++){
           cin >> arr[arr_i];
        }
        cout << count_inversions(arr) << endl;
    }
    return 0;
}