nclude <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, sum = 0, mode = 0;
    double mean, median;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    mean = double(sum) / N;
    if(0 == N % 2){
        median = (double(arr[(N - 1) / 2]) + double(arr[N / 2])) / 2;
    }
    else{
        median = double(arr[N/2]);
    }
    int max = 1, cnt = 1;
    mode = arr[0];
    for(int i = 1; i < arr.size(); ++i){
        if(arr[i] == arr[i - 1]){
            max += 1;
        }
        else{
            if(cnt < max){
                mode = arr[i - 1];
                cnt = max;
            }
            max = 1;
        }
    }
    printf("%.1f\n", mean);
    printf("%.1f\n", median);
    printf("%d", mode);
    return 0;
}
