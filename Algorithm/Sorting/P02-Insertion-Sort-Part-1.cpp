#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
void insertionSort(vector<int>  ar) {
    if(ar.size() <= 1){
        for(int j = 0; j < ar.size(); ++j){
            cout << ar[j] << " ";
        }
        cout << endl; 
    }
    int t = ar[ar.size() - 1];
    int j = ar.size() - 1;
    while(j > 0 && ar[j - 1] > t){
        ar[j] = ar[j - 1];
        --j;
        for(int k = 0; k < ar.size(); ++k){
            cout << ar[k] << " ";
        }
        cout << endl; 
    }
    ar[j] = t;
    for(int k = 0; k < ar.size(); ++k){
        cout << ar[k] << " ";
    }
    cout << endl;
}
int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp); 
    }

    insertionSort(_ar);
    return 0;
}