#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int partition(vector <int> &arr, int L, int R){
    int pivot = arr[R];
    int i = L;
    while(arr[i] < pivot) ++i;
    int j = i;
    for(; j <= R - 1; ++j){
        if(arr[j] < pivot){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            ++i;
        }
    }
    arr[R] = arr[i];
    arr[i] = pivot;
    return i;
}

void quickSort(vector <int> &arr, int L, int R) {
   // Complete this function
    if(R > L){
        int pivot = partition(arr, L, R);
        for(int i = 0; i < arr.size(); ++i){
            cout << arr[i] << " ";
        }
        cout << endl;
        quickSort(arr, L, pivot - 1);
        quickSort(arr, pivot + 1, R);
    }
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr, 0, arr.size() - 1);

    return 0;
}