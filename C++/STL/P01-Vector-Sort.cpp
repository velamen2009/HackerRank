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
    vector<int> nums(N, 0);
    for(int i = 0; i < N; ++i){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < N; ++i){
        cout << nums[i] << " ";
    }
    return 0;
}