#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    /* copy and paste, nice solution~*/
    long int N, K, p, q, sum, i, j, max = 0, x = 0;
    cin >> N >> K;
    
    vector<int> a(N + 1);

    for(i = 0; i < K; ++i)
    {
        cin >> p >> q >> sum;
        a[p] += sum;
        if((q+1) <= N) a[q + 1] -= sum;
    }

    for(i = 1; i <= N; ++i)
    {
       x = x + a[i];
       if(max < x) max = x;
    }
    cout << max << endl;
    return 0;
}