#include <bits/stdc++.h>
using namespace std;

//fake partition
int partition(vector<int>& arr, int L, int R){
    int pivot = arr[L];
    vector<int> tmp(R - L + 1, 0);
	int k = 0;
	for(int i = L; i <= R; ++i){
		if(arr[i] < pivot){
			tmp[k] = arr[i];
			++k;
		}
	}
	for(int i = L; i <= R; ++i){
		if(arr[i] == pivot){
			tmp[k] = pivot;
			++k;
		}
	}
	int ans = k;
	for(int i = L; i <= R; ++i){
		if(arr[i] > pivot){
			tmp[k] = arr[i];
			++k;
		}
	}
	for(int i = L; i <= R; ++i){
		arr[i] = tmp[i - L];
	}
    return L + ans - 1;
}

void quickSort(vector <int> &arr, int L, int R) {
   // Complete this function
    if(R > L){
        int pivot = partition(arr, L, R);
        quickSort(arr, L, pivot - 1);
        quickSort(arr, pivot + 1, R);
        if(R > L){
            for(int i = L; i <= R; ++i){
                cout << arr[i] << " ";
            }
            cout << endl;
        }    
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