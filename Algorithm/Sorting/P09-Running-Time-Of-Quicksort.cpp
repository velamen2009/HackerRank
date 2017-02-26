#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int partition(vector <int> &arr, int L, int R, int& swap){
    int pivot = arr[R];
    int i = L;
    while(arr[i] < pivot){
       ++i;
       ++swap;
    }
    int j = i;
    for(; j <= R - 1; ++j){
        if(arr[j] < pivot){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            ++swap;
            ++i;
        }
    }
    arr[R] = arr[i];
    arr[i] = pivot;
    ++swap;
    return i;
}

void quickSort(vector <int> &arr, int L, int R, int& swap) {
   // Complete this function
    if(R > L){
        int pivot = partition(arr, L, R, swap);
        quickSort(arr, L, pivot - 1, swap);
        quickSort(arr, pivot + 1, R, swap);
    }
}

void insertSort(vector <int> &arr, int L, int R, int& swap){
    for(int i = L + 1; i <= R; ++i){
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            --j;
            ++swap;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n;
    cin >> n;
    int x;

    vector <int> arr(n), arr2(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> x;
        arr[i] = x;
        arr2[i] = x;
    }
    int swap1 = 0, swap2 = 0;
    quickSort(arr, 0, arr.size() - 1, swap1);
    insertSort(arr2, 0, arr2.size() - 1, swap2);
    
    cout << swap2 - swap1 << endl;

    return 0;
}