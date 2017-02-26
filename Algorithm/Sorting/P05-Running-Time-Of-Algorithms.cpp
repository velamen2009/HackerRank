#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i != N; ++i){
        cin >> arr[i];
    }
    int cnt = 0;
    for(int i = 1; i != N; ++i){
        int temp = arr[i], j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            --j;
            ++cnt;
        }
        arr[j + 1] = temp;
    }
    cout << cnt << endl;
    return 0;
}